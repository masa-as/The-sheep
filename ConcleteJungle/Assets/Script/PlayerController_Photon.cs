using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PlayerController_Photon : MonoBehaviour {

    Vector3 pos, pos_ito, pos_camera;
    float dirY, dirX;
    float leng;
    float target_pos;
    public GameObject ceiling;
    public GameObject woolPrefab;
    public GameObject bokaPrefab;
    public float speed = 17;
    public float speed2 = 20;

    public GameObject Mask;
    public GameObject Mask2;

    GameObject wool;
    Vector3 ceiling_pos;
    public GameObject itoPrafab;
    GameObject ito;
    HingeJoint joint, joint_ito;
    Rigidbody rb_player;
    GameObject female;
    GameObject boka;
    GameObject wolf;
    private Animator anim;
    string sceneName;
    public float wool_count;
    public int p; //woolの出現確率
    PhotonView myPhotonView;
    Slider _slider;
    bool swing, jump, boka_exit, mask_flag, mask_flag2;


    // Use this for initialization
    private void Awake()
    {
        DontDestroyOnLoad(this.gameObject);
    }
    void Start () {
        Mask = GameObject.Find("Canvas/mask");
        Mask2 = GameObject.Find("Canvas/mask2");
        swing = false;
        jump = false;
        mask_flag = false;
        mask_flag2 = false;
        this.myPhotonView = GetComponent<PhotonView>();
        _slider = GameObject.Find("WoolBar").GetComponent<Slider>();
        ceiling = GameObject.Find("ceiling");
        female = GameObject.Find("female");
        ceiling_pos = ceiling.transform.position;
        anim = GetComponent<Animator>();
        pos_camera = Camera.main.transform.position;
        target_pos = pos_camera.x;
        rb_player = GetComponent<Rigidbody>();
        rb_player.AddForce(30, 0, 0, ForceMode.Impulse);
	}
	
	// Update is called once per
    void Update () {
        if (this.myPhotonView.isMine)
        {
            if (Input.GetMouseButtonDown(0)){
                swing = true;
            }
            if(Input.GetMouseButtonUp(0)){
                jump = true;
                if (Random.Range(0, 100) < p){
                    wool = Instantiate(woolPrefab) as GameObject;
                    wool.transform.position = new Vector3(transform.position.x + 30f, Random.Range(5.0f, 10.0f), 0f);
                }

            }
        }
    }

    private void FixedUpdate()
    {
        if (mask_flag == true)
        {
            Mask.transform.position += Vector3.up * speed;
            if (Mask.transform.position.y >= 371)
            {
                speed = 0;
            }
        }

        if (mask_flag2 == true)
        {
            Mask2.transform.position += Vector3.down * speed2;
            if (Mask2.transform.position.y <= 389)
            {
                speed2 = 0;
            }
        }


        if (this.myPhotonView.isMine){
            pos = transform.position;
            if (swing)
            {
                pos_ito = pos;
                dirY = ceiling_pos.y - pos.y;
                dirX = dirY;
                leng = Mathf.Sqrt(dirX * dirX + dirY * dirY) * 0.095f;//画像差し替えたら調節
                if ((wool_count - leng * 20f) > 0)
                {
                    ito = Instantiate(itoPrafab) as GameObject;
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
                else{
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
            pos_camera.x = transform.position.x + 20;
            Camera.main.transform.position = pos_camera;
            _slider.value = wool_count / 100;
        }

    }

    private void OnCollisionEnter(Collision collision)
    {

        if (this.myPhotonView.isMine)
        {
            if (collision.gameObject.name == "ground")
            {
                Invoke("restart", 1.0f);
            }
        }

        if (collision.gameObject.name == "Goal")
        {
            if(this.myPhotonView.isMine){
                mask_flag = true;
                pos = transform.position;
                female.transform.position = new Vector3(pos.x + 10, 0.5f, 0);
                sceneName = "Win";
                waitChangeScene(1.2f);
            }
            else{
                pos = transform.position;
                mask_flag2 = true;
                sceneName = "Lose";
                waitChangeScene(1.2f);
            }
        }

    }

    private void OnTriggerEnter(Collider other)
    {
        if (this.myPhotonView.isMine){
            if (other.gameObject.tag == "wool")
            {
                wool_count += 20f;
                Destroy(other.gameObject);
            }
            if (other.gameObject.name == "wolf" && !Input.GetMouseButtonDown(0))
            {
                boka = Instantiate(bokaPrefab) as GameObject;
                boka_exit = true;
                pos = transform.position;
                boka.transform.position = pos;
            }
        }
    }

    private void waitChangeScene(float time)
    {
        Invoke("changeScene", time);
    }

    private void changeScene()
    {
        SceneManager.LoadScene(sceneName);
        Destroy(this.gameObject);
    }

    private void restart(){
        pos.y = 15f;
        transform.position = pos;
        wool_count = 50;
        Destroy(ito);
        Destroy(joint);
        joint = null;
    }
}
