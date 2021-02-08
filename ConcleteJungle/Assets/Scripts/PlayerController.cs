using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{

    Vector3 pos, pos_ito;
    float dirY, dirX;
    float leng;
    public GameObject ceiling;
    public GameObject woolPrefab;
    public GameObject bokaPrefab;
    GameObject wool;
    Vector3 ceiling_pos;
    public GameObject itoPrafab;
    GameObject ito;
    HingeJoint joint, joint_ito;
    Rigidbody rb_player;
    GameObject female;
    GameObject boka;
    private Animator anim;
    string sceneName;
    int ito_flag2;
    public float wool_count;
    public int p; //woolの出現確率
    Slider _slider;
    bool swing, jump, boka_exit;
    public GameObject Mask;
    public GameObject Mask2;
    int mask_flag;
    public static int mask_speed = 22;

    // Use this for initialization
    void Start()
    {
        //Time.timeScale = 1f;
        swing = false;
        jump = false;
        boka_exit = false;
        ito_flag2 = 0;
        female = GameObject.Find("female");
        ceiling = GameObject.Find("ceiling");
        ceiling_pos = ceiling.transform.position;
        anim = GetComponent<Animator>();
        rb_player = GetComponent<Rigidbody>();
        rb_player.AddForce(30, 0, 0, ForceMode.Impulse);
        // スライダーを取得する
        _slider = GameObject.Find("WoolBar").GetComponent<Slider>();
        mask_flag = 0;
    }

    // Update is called once per
    void Update()
    {
        ito_flag2 = PauseScript.GetItoFlag();
        if (Input.GetMouseButtonDown(0) && ito_flag2 == 1)
        {
            swing = true;
            if (rb_player.velocity.y < 0)
            {
                Debug.Log("good");
            }
            if (rb_player.velocity.y > 0)
            {
                Debug.Log("bad");
            }

        }
        if (Input.GetMouseButtonUp(0) && ito_flag2 == 1)
        {
            jump = true;
            if (Random.Range(0, 100) < p)
            {
                wool = Instantiate(woolPrefab) as GameObject;
                wool.transform.position = new Vector3(transform.position.x + 65f, Random.Range(5.0f, 10.0f), 0f);
            }
        }
    }

    private void FixedUpdate()
    {
        if (mask_flag == 1)
        {
            Mask2.transform.position += Vector3.down * mask_speed;
        }
        if (mask_flag == 2)
        {
            Mask.transform.position += Vector3.up * mask_speed;
        }

        //Debug.Log("速度ベクトル：" + rb_player.velocity.y);
        //Debug.Log("速度：" + rb_player.velocity.magnitude);
        if (boka_exit) { return; }
        if (swing)
        {
            anim.SetBool("Swinging", true);
            pos = transform.position;
            pos_ito = pos;
            dirY = ceiling_pos.y - pos.y;
            dirX = dirY;
            leng = Mathf.Sqrt(dirX * dirX + dirY * dirY) * 0.095f;//画像差し替えたら調節
            if ((wool_count - leng * 20f) > 0)
            {
                ito = Instantiate(itoPrafab) as GameObject;
                float z = ito.transform.eulerAngles.z;
                this.transform.rotation = Quaternion.Euler(0.0f, 0.0f, z);

                ito.transform.Rotate(0f, 0f, -45.0f);
                ito.transform.localScale = new Vector3(0.4f, leng, 0f);
                pos_ito.x += dirX / 2.0f + 1.4f;//画像差し替えたら調節
                pos_ito.y += dirY / 2.0f + 1.4f;//画像差し替えたら調節
                ito.transform.position = pos_ito;

                joint = gameObject.AddComponent<HingeJoint>();
                Rigidbody rb = ito.GetComponent<Rigidbody>();
                joint.connectedBody = rb;
                joint.anchor = new Vector3(0.2f, 0.0f, 0);
                joint.axis = new Vector3(0, 0, 1);

                joint_ito = ito.gameObject.AddComponent<HingeJoint>();
                Rigidbody rb_ceil = ceiling.GetComponent<Rigidbody>();
                joint_ito.connectedBody = rb_ceil;
                joint_ito.anchor = new Vector3(0, dirY / 2f + 0.6f, 0);//画像差し替えたら調節
                joint_ito.axis = new Vector3(0, 0, 1);

                //糸の長さによる
                rb_player.AddForce(leng * 10, -leng * 10, 0, ForceMode.Impulse);
                wool_count -= leng * 7;
                swing = false;
            }
        }
        if (jump)
        {
            anim.SetBool("Swinging", false);
            Destroy(ito);
            Destroy(joint);
            joint = null;
            rb_player.AddForce(10f, 0, 0, ForceMode.Impulse);
            jump = false;

        }

        //ウールバー長さ更新
        _slider.value = wool_count / 100;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name == "ground")
        {
            mask_flag = 1;
            sceneName = "GameOver";
            waitChangeScene(1.0f);
        }
        if (collision.gameObject.name == "Goal")
        {
            mask_flag = 2;
            pos = transform.position;
            female.transform.position = new Vector3(pos.x + 10, 0.5f, 0);
            sceneName = "Result";
            waitChangeScene(1.0f);
            //SceneManager.LoadScene("result");
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "wool")
        {
            wool_count += 20f;
            if (wool_count > 100.0f)
            {
                wool_count = 100.0f;
            }
            Destroy(other.gameObject);
        }
        if (other.gameObject.name == "wolf")
        {
            mask_flag = 1;
            Destroy(ito);
            Destroy(joint);
            joint = null;
            dirX = 0.0f;
            boka = Instantiate(bokaPrefab) as GameObject;
            boka_exit = true;
            pos = transform.position;
            boka.transform.position = pos;
            sceneName = "GameOver";
            waitChangeScene(1.0f);
        }
    }

    private void waitChangeScene(float time)
    {
        Invoke("changeScene", time);
    }

    private void changeScene()
    {
        if (boka_exit)
        {
            Destroy(boka);
            boka_exit = false;
        }
        SceneManager.LoadScene(sceneName);
    }

}
