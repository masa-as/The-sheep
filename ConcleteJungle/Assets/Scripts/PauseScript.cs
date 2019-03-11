using UnityEngine;
using System.Collections;

public class PauseScript : MonoBehaviour
{
    public static int ito_flag = 1;
    //　ポーズした時に表示するUI
    [SerializeField]
    public GameObject pauseUI;
    public GameObject pauseButton;

    public void PauseButtonDown()
    {
        //　ポーズUIのアクティブ、非アクティブを切り替え
        pauseUI.SetActive(!pauseUI.activeSelf);
        pauseButton.SetActive(!pauseButton.activeSelf);

        //　ポーズUIが表示されてる時は停止
        if (pauseUI.activeSelf)
        {
            Time.timeScale = 0f;
            //　ポーズUIが表示されてなければ通常通り進行
            ito_flag = 0;
        }
        else
        {
            Time.timeScale = 1f;
            ito_flag = 1;
        }
    }

    public static int GetItoFlag()
    {
        return ito_flag;
    }
}