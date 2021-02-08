using UnityEngine;
using System.Collections;

public class BackgroundController2 : MonoBehaviour
{

    public float speed;
    //public int spriteCount = 2;
    public GameObject Background;


    void Update()
    {
        // 左へ移動
        transform.position += Vector3.left * speed * Time.deltaTime;
        if (transform.position.x < Camera.main.transform.position.x - 58f)
        {
            Vector3 tmp = Background.transform.position;
            tmp.x += 114;
            Background.transform.position = tmp;

        }
    }
    /*
    void OnBecameInvisible()
    {
        // スプライトの幅を取得
        float width = GetComponent<SpriteRenderer>().bounds.size.x;
        // 幅ｘ個数分だけ右へ移動
        transform.position += Vector3.right * width * spriteCount;
    }
    */
}