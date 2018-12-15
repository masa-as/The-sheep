using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Fadetest : MonoBehaviour
{
    float alfa;
    float speed = 0.01f;
    float red, green, blue;

    void Start()
    {
        red = GetComponent<Image>().color.r;
        green = GetComponent<Image>().color.g;
        blue = GetComponent<Image>().color.b;
        alfa = 1;
    }

    void Update()
    {
        GetComponent<Image>().color = new Color(red, green, blue, alfa);
        alfa -= speed;
    }
}