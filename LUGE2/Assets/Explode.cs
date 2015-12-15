using UnityEngine;
using System.Collections;

public class Explode : MonoBehaviour {

	private ParticleSystem ps;

	void Start(){
		ps = GetComponent<ParticleSystem> ();
		if (ps == null)
			ps = GetComponentInChildren<ParticleSystem> ();
	}

	public IEnumerator Expload(){
		ps.Play ();
		yield return new WaitForSeconds (.15f);
		gameObject.GetComponent<Renderer> ().enabled = false;

	}
}
