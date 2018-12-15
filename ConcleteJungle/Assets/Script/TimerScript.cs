using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimerScript : MonoBehaviour {

    float time;
	Text text;
    public static int sec,msec;

    void Start () {	
		time = 0;
		text = GetComponent<Text>();
    }

	void Update () {
		time += Time.deltaTime;//毎フレームの時間を加算.
		sec = (int)time;//秒.timeを60で割った余り.
		msec = (int)(time*100%100);
        string secText, msecText;//分・秒を用意.

        if (sec < 10)
            secText = "0" + sec.ToString();
		else
			secText = sec.ToString();

		if (msec < 10)
			msecText = "0" + msec.ToString ();

        else 
			msecText = msec.ToString ();
		

		text.text = secText + "\"" + msecText ;

		//Debug.Log (time);
	}

    public static int GetSec() {
        return sec;
    }

    public static int GetMsec() {
        return msec;
    }

}