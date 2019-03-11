using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Countdown : MonoBehaviour
{
    [SerializeField]
    private Text _textCountdown;
    private GameObject timer;
    public GameObject start;
    void Start()
    {
        timer = GameObject.Find("Timer");
        _textCountdown.text = "";
        //時を止める
        Time.timeScale = 0f;

        StartCoroutine(CountdownCoroutine());
    }

    IEnumerator CountdownCoroutine()
    {
        _textCountdown.text = "3";
        yield return new WaitForSecondsRealtime(1.0f);

        _textCountdown.text = "2";
        yield return new WaitForSecondsRealtime(0.5f);

        _textCountdown.text = "1";
        yield return new WaitForSecondsRealtime(0.5f);


        _textCountdown.text = "";
        start.gameObject.SetActive(true);
        yield return new WaitForSecondsRealtime(1.0f);

        _textCountdown.gameObject.SetActive(false);
        //時が動き出す
        Time.timeScale = 1f;
        timer.GetComponent<TimerScript>().enabled = true;
    }
}