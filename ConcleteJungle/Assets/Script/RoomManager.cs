using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomManager : MonoBehaviour {

    private string playerName = "GuestAAA";
    private string roomName = "myRoom";
    private bool connectFailed = false;

    public void Awake()
    {
        // マスタークライアントのsceneと同じsceneを部屋に入室した人もロードする。
        PhotonNetwork.automaticallySyncScene = true;
        // もしまだ接続していない状態ならば
        if (PhotonNetwork.connectionStateDetailed == ClientState.ConnectedToMaster)
        {
            // PhotonServerSettingsの設定に従ってPhotonNetwork（マスターサーバー）に接続する。
            PhotonNetwork.ConnectUsingSettings("1.0");
        }

        // もしPhotonNetWorkに名前を登録していないならば、PhotonNetworkに名前を登録する
        if (PhotonNetwork.playerName == null)
        {
            //ランダムにプレイヤーの名前を生成
            this.playerName = "Guest" + UnityEngine.Random.Range(1, 9999);
            //Photonにプレイヤーを登録
            PhotonNetwork.playerName = this.playerName;
        }
        else
        {
            //Photonにプレイヤーを登録
            this.playerName = PhotonNetwork.playerName;
        }
    }

    public void OnGUI()
    {
        //ルーム名をテキストフィールドから入力させる
        this.roomName = GUILayout.TextField(this.roomName);
        //ルーム作成ボタン
        if (GUILayout.Button("Create Room", GUILayout.Width(100)))
        {
            //ルームを作成。引数はルーム名
            PhotonNetwork.CreateRoom(this.roomName);
        }
        //ルームに入室するボタン
        if (GUILayout.Button("Join Room", GUILayout.Width(100)))
        {
            //入室。引数はルーム名
            PhotonNetwork.JoinRoom(this.roomName);
        }
    }

    //各ステート時にコールされる。書かないとエラーに
    //入室時にコール
    public void OnJoinedRoom()
    {
        Debug.Log("OnJoinedRoom");
    }
    //部屋作成に成功したときにコール
    public void OnCreatedRoom()
    {
        Debug.Log("OnCreatedRoom");
    }
    //接続が切断されたときにコール
    public void OnDisconnectedFromPhoton()
    {
        Debug.Log("Disconnected from Photon.");
    }
    //接続失敗時にコール
    public void OnFailedToConnectToPhoton(object parameters)
    {
        this.connectFailed = true;
        Debug.Log("OnFailedToConnectToPhoton. StatusCode: " + parameters + " ServerAddress: " + PhotonNetwork.networkingPeer.ServerAddress);
    }
}
