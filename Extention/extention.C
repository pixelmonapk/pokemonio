using System.IO;
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    void Start() {
        Debug.Log(Path.GetExtension("sdcard0/android/obb"));
    }
}
