using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System;

public class DemoNetWork : Photon.PunBehaviour
{
    public GameObject Button;
    bool start = false;
    string GroupName = null;
    public InputField GetInput;
    public int Id;
    // Use this for initialization
    void Start()
    {
        GetInput.text = null;
        SceneManager.sceneLoaded += OnLoadedScene;
        PhotonNetwork.ConnectUsingSettings("0.1");
        PhotonNetwork.logLevel = PhotonLogLevel.Full;
        Button.SetActive(false);
    }

    public void buttonDown()
    {
        Button.SetActive(false);
        GroupName = GetInput.text;
        if (GroupName.Equals(""))
        {
            Id = 2;
            PhotonNetwork.JoinRandomRoom();
        }
        else
        {
            PhotonNetwork.JoinRoom(GroupName);
            Id = 2;
            GetInput.text = null;
        }
    }

    public override void OnJoinedLobby()
    {
        Button.SetActive(true);
    }

    public override void OnPhotonRandomJoinFailed(object[] codeAndMsg)
    {
        GroupName = Guid.NewGuid().ToString("N").Substring(0, 12);
        PhotonNetwork.CreateRoom(GroupName, new RoomOptions() { IsVisible = true, IsOpen = true, MaxPlayers = 2 }, null);
        Id = 1;
    }

    public override void OnPhotonJoinRoomFailed(object[] codeAndMsg)
    {
        
        PhotonNetwork.CreateRoom(GroupName, new RoomOptions() { IsVisible = true, IsOpen = true, MaxPlayers = 2 }, null);
        Id = 1;
    }

    public override void OnJoinedRoom()
    { 
        start = true;
        Debug.Log("人数：" + PhotonNetwork.playerList.Length);
    }

    public void FixedUpdate()
    {
        if (start)
        {
            if(PhotonNetwork.playerList.Length == 2){
                PhotonNetwork.isMessageQueueRunning = false;         
                SceneManager.LoadScene("Multi");
            }
            //ルームの人数検索（２人だったらゲーム開始） 
        }
    }

    private void OnLoadedScene(Scene i_scene, LoadSceneMode i_mode)
    {
        Debug.Log("Onload");
        // シーンの遷移が完了したら自分用のオブジェクトを生成.
        if (i_scene.name == "Multi" && start)
        {
            PhotonNetwork.isMessageQueueRunning = true;
            Vector3 spawnPosition = new Vector3(0, 15-(Id-1)*5, 0);
            if(Id == 1){
                PhotonNetwork.Instantiate("hitujiPhoton1", spawnPosition, Quaternion.identity, 0);
                Debug.Log("1P");
            }
            else
            {
                PhotonNetwork.Instantiate("hitujiPhoton2", spawnPosition, Quaternion.identity, 0);
                Debug.Log("2P");
            }
            start = false;
        }
    }

    public override void OnLeftRoom()
    {
        Button.SetActive(true);
        GetInput.text = null;
        SceneManager.sceneLoaded += OnLoadedScene;
        PhotonNetwork.ConnectUsingSettings("0.1");
        PhotonNetwork.logLevel = PhotonLogLevel.Full;
    }

}