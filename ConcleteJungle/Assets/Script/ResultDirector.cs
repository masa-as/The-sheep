using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ResultDirector : MonoBehaviour {

    // Use this for initialization
    void Start () {

    }
	
	// Update is called once per frame
	void Update () {
		
	}

    public void SoloAgainButtonDown()
    {
		Debug.Log("Solo");
        SceneManager.LoadScene("Solo");
    }

    public void SelectButtonDown()
    {
		Debug.Log("Select");
        SceneManager.LoadScene("Select");
    }

    public void TitleButtonDown()
    {
		Debug.Log("Title");
        SceneManager.LoadScene("Title");
    }

    public void EndButtonDown()
    {
		Debug.Log("End");
        Application.Quit();
    }
}
