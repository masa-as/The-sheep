using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class multiController : MonoBehaviour {


    public void MultiAgainButtonDown()
    {
        PhotonNetwork.Disconnect();
        SceneManager.LoadScene("Multi_Select");
    }

    public void EndButtonDown()
    {
        PhotonNetwork.Disconnect();
        Debug.Log("End");
        Application.Quit();
    }
}
