using UnityEngine;
using System.Collections;

public class Maskmove : MonoBehaviour
{
    void Update()
    {
        transform.position += Vector3.up * PlayerController.mask_speed;
    }
}