using UnityEngine;
using System.Collections;

public class LoadWhenTapped : MonoBehaviour {

	public GameObject loadingBG;

	void Update(){
		#if MOBILE_INPUT
		for (int i = 0; i < Input.touchCount; i++) {
			Time.timeScale = 1;
			Application.LoadLevel (1);
		}

		#else
		if(Input.GetMouseButton(0)){
			Time.timeScale = 1;
			Application.LoadLevel(1);
		}
		#endif
	}

	public void LoadScene(string level)
	{
		loadingBG.SetActive (true);
		Application.LoadLevel(level);
	}
}
