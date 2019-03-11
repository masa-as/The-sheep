using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ResultTime : MonoBehaviour {

    // Use this for initialization
    void Start () {
        int sec = (int)TimerScript.sec;
        int msec = (int)TimerScript.msec;
        string secText, msecText;//分・秒を用意.

        if (sec < 10)
            secText = "0" + sec.ToString();
        else
            secText = sec.ToString();

        if (msec < 10)
            msecText = "0" + msec.ToString();
        else
            msecText = msec.ToString();

        GetComponent<Text>().text = secText+ "\"" + msecText;

    }

    // Update is called once per frame
    void Update () {
        
    }
}
