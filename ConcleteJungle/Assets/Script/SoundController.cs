using UnityEngine;
using System.Collections;

public class SoundController : MonoBehaviour
{
    public AudioClip audioClip1;
    private AudioSource audioSource;

    void Start()
    {
        audioSource = gameObject.GetComponent<AudioSource>();
        audioSource.clip = audioClip1;
        audioSource.Play();
    }

}