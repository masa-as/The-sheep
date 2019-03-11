using UnityEngine;
using System.Collections;

public class BackgroundController : MonoBehaviour
{
    public GameObject Hitsuji;
    public GameObject Background;

    void Update()
    {

        //transform.Translate(-0.1f, 0, 0);
        if (transform.position.x < Hitsuji.transform.position.x -100f)
        {
            Vector3 tmp = Background.transform.position;
            tmp.x +=132;
            Background.transform.position = tmp;

            /*
            transform.position = new Vector3(13.8f, 0, 0);
            */
        }

    }
    /*
    void OnBecameVisible()
    {
        Debug.Log("OnBecameVisible");
    }

    // 写っていない 
    void OnBecameInvisible()
    {
        Debug.Log("OnBecameInVisible");
        /*
        Vector3 tmp = Background.transform.position;
        tmp.x += 60;
        Background.transform.position = tmp;

    }
    */
}