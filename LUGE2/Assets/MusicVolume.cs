using UnityEngine;
using System.Collections;

public class MusicVolume : MonoBehaviour {

	// Use this for initialization

	AudioSource source;

	void Start () {
		GameObject sourced = GameObject.Find ("Main Theme");
		if(sourced != null)
			source = sourced.GetComponent<AudioSource> ();	
	}
	
	public void OnValueChanged(float val){
		if(source != null)
			source.volume = val;
	}
}
