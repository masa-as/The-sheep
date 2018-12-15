using UnityEngine;
using System.Collections;

public class Maskmove2 : MonoBehaviour
{

    public float speed = 10;
    //public int spriteCount = 2;
    public GameObject Mask;


    void Update()
    {
        transform.position += Vector3.down * speed;
    }
}