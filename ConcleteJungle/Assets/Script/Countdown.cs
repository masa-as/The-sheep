using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Countdown : MonoBehaviour
{
    [SerializeField]
    private Text _textCountdown;
    public GameObject start;

    void Start()
    {
        _textCountdown.text = "";
        Time.timeScale = 0f;

        StartCoroutine(CountdownCoroutine());

    }

    private void OnClick()
    {
        StartCoroutine(CountdownCoroutine());
    }

    public void OnClickTest()
    {
        StartCoroutine(CountdownCoroutine());
    }

    IEnumerator CountdownCoroutine()
    {
        //時を止める
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
    }
}