using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.IO;  
using System.Text;

//create array of letters and access randomly for word player
//is to make? 
//how to get these words? read in text file to dictionary? 



public class WordManager : MonoBehaviour {
	
	//public string[] matchingWords;
	private string[] matchingWords = new string[20]; 
	private string wordFinal = "";
	private int nextLetterIndex = 0; 

	public int lifeCount = 5; //lives 

	private bool isDead = false; 

	public int wordLength = 3; //SET THIS
	public int lettersGotten = 0; //letters they've gotten so far

	private int wordCount = 0; 

	private string wordCurrent = ""; //letters you have already 

	public Text wordCurrentText; 
	public Text countText; 
	public Text score;
	public Text endScore;
	public Text finalWord;

	public GameObject EndScreen;
	private AudioSource audio;

	public AudioClip pickup;
	public AudioClip wrongLetter;
	public AudioClip obstacleSound;

	void Start(){
		//wordLength = 0;
		audio = gameObject.GetComponent<AudioSource>();
		SetCountText (); 
		SetWordText (); 
		SetScoreText ();
		setPossibleWords(wordLength); //set words for game
		//SET TO BE RANDOM
		wordFinal = matchingWords [(int) (Random.Range(0F, matchingWords.Length))];
	}
	
	private void nextLevel (){
		finalWord.text = wordCurrent;
		Animator anim = finalWord.gameObject.GetComponent<Animator> ();
		anim.Play ("Discovered");

		wordCount ++; 
		wordLength++; 
		wordCurrent = ""; 
		nextLetterIndex = 0; 
		lettersGotten = 0;
		//NEXT LEVEL!
		setPossibleWords (wordLength); 
		//wordFinal = matchingWords [wordCount]; 
		wordFinal = matchingWords[(int) (Random.Range(0F, matchingWords.Length))];
		SetCountText (); 
		SetScoreText ();
		SetWordText (); 
	}

	public char getNextLetter(){
		return wordFinal [nextLetterIndex];
	}

	private void SetCountText(){
		countText.text = "Lives: " + lifeCount.ToString ();
	}

	private void SetScoreText(){
		score.text = "Score: " + wordCount;
	}

	private void SetWordText(){
		wordCurrentText.text = "Letters: " + wordCurrent; 

//		Debug.Log (wordLength - lettersGotten);
		//add in spaces _ for letters player needs to get
		for (int i = 0; i < wordLength - lettersGotten; i++) {
			//wordCurrentText.text = wordCurrentText.text + "_ "; 
			wordCurrentText.text += " _";
		}
//		Debug.Log (wordCurrentText.text);
	}
	
	private void OnTriggerEnter(Collider other){
	//	Debug.Log (other.gameObject.tag);
		if (other.gameObject.tag == "Obstacle") {
			lifeCount--; 
			Animator anim =  other.gameObject.GetComponent<Animator>();

			/* WHY THE $%^&*_) WILL THIS NOT WORK!$%^&^**&^*@&*&(*)!???????!??!?!?!?!*/

			anim.enabled = true;
//			anim.playbackTime = 0f;
			anim.Play ("Explosion");
			audio.PlayOneShot (obstacleSound);

			/*******************/

			SetCountText (); 

		} else if (other.gameObject.tag == "Letters") {
			string goName = other.gameObject.name; 
			LetterHandler (goName, other.gameObject); 
		}
		Debug.Log (lifeCount);
		if (lifeCount <= 0) {
			OnDeath ();

		}

	}

	private void OnDeath(){
		Time.timeScale = 0;
		Debug.Log ("dead");
		EndScreen.SetActive (true);
		endScore.text = "You Got " + wordCount + " Words!";
	}

	public string getNewLetters(int numLetters){
		string threeLetters = "";

		bool hasCreatedLetter = false;

		for (int i = 0; i < numLetters; i++) {
			if (!hasCreatedLetter && 1 == Random.Range (0, numLetters)){
				threeLetters += getNextLetter ();
//				Debug.Log (getNextLetter());
				hasCreatedLetter = true;
			}
			else
				threeLetters += (char) (Random.Range(65, 90));
		}

		return threeLetters;
	}

	//function that handles colisions with letters 
	private void LetterHandler(string name, GameObject go){

		char goLetter = name [0];
		//got right letter 
		if (goLetter == wordFinal [nextLetterIndex]) {
			nextLetterIndex++; 
			wordCurrent = wordCurrent + goLetter;
			lettersGotten++; 
			Debug.Log ("sound!"); 
			audio.PlayOneShot (pickup);
			//Destroy (go);
			SetWordText (); 
				
			//done with word
			if (wordCurrent == wordFinal) {
				nextLevel ();
			}
		} else {
			audio.PlayOneShot (wrongLetter);
		}

		Animator anim =  go.gameObject.GetComponent<Animator>();

		/* WHY THE $%^&*_) WILL THIS NOT WORK!$%^&^**&^*@&*&(*)!???????!??!?!?!?!*/

		anim.enabled = true;
//		anim.playbackTime = 0f;
		anim.Play ("Explosion");

	}
 	private void setPossibleWords(int wordCount){
		string file; 

		if (wordCount == 3) {
			file = "three.txt"; 
		} else if (wordCount == 4) {
			file = "four.txt"; 
		}
		//only up to five letter words for now
		else if (wordCount == 5) {
			file = "five.txt"; 
		} else if (wordCount == 6) {
			file = "six.txt";
		} else if (wordCount == 7)
			file = "seven.txt";
		else if (wordCount == 8)
			file = "eight.txt";
		else if (wordCount == 9)
			file = "nine.txt";
		else
			file = "ten.txt";

		TextAsset textFile = Resources.Load (file) as TextAsset;
		string[] names = textFile.text.Split ('\n');
		matchingWords = names;
	}
	
}
