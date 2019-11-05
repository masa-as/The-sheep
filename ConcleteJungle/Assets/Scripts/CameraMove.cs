using UnityEngine;
using System.Collections;

public class CameraMove : MonoBehaviour
{

    private GameObject player;

    // Use this for initialization
    void Start()
    {
        player = GameObject.Find("hituji");
    }

    // Update is called once per frame
    void FixedUpdate()
    {
       transform.position = new Vector3(player.transform.position.x + 20, 5, -25);
    }
}