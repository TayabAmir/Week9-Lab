#include<iostream>
using namespace std;
void jazzifyChords(string chords[], int numChords);
main(){
	int numChords;
	cout << "Enter the number of chords: ";
	cin >> numChords;
	string chords[numChords];
	cout << "Enter " << numChords << " chords, one per line: " << endl;
	for(int i=0; i<numChords; i++)
	 	cin >> chords[i];
	 	
	jazzifyChords(chords, numChords);
}
void jazzifyChords(string chords[], int numChords){
	string lastLetter;
	string seven = "7";
	for(int i=0;i<numChords;i++){
		lastLetter = chords[i];
		if(lastLetter[lastLetter.length()-1] != '7'){
			chords[i] = chords[i] + seven;
		}
	}
	cout << "Jazzified chords: [" << chords[0];
	for(int i=1;i<numChords;i++){
		cout << ", "<< chords[i];
	}
	cout << "]";
}

