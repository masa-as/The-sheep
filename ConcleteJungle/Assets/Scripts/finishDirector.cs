using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FinishDirector : MonoBehaviour {

    public void SoloAgainButtonDown()
    {
        Debug.Log("Solo");
        SceneManager.LoadScene("Solo");
    }

    public void EndButtonDown()
    {
        Debug.Log("End");
        Application.Quit();
    }
}
