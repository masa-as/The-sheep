using UnityEngine;
using System.Collections;

public class StartDestroyer : MonoBehaviour {
    private Animator animator;

    void Start() {
        animator = GetComponent<Animator>();

    }
    private void Update()
    {
        var info = animator.GetCurrentAnimatorStateInfo(0);
        if (info.normalizedTime >= 1.5)
        {
            Destroy(gameObject);

        }
    }
}