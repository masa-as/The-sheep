using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SelectController : MonoBehaviour {

    public GameObject Multi_Background;
    public GameObject Solo_Background;

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void SoloButtonDown()
    {
        SceneManager.LoadScene("Solo");
    }
    public void MultiButtonDown()
    {
        SceneManager.LoadScene("Multi_Select");
    }
    public void LeftScreenDown()
    {
        Multi_Background.SetActive(!Multi_Background.activeSelf);
    }
}
