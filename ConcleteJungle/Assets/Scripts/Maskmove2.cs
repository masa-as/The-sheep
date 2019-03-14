using UnityEngine;
using System.Collections;

public class Maskmove2 : MonoBehaviour
{
    void Update()
    {
        transform.position += Vector3.down * PlayerController.mask_speed;
    }
}