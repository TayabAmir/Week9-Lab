#include<iostream>
using namespace std;

main(){
	string sentence;
	int counter=0;
	cout << "Enter a string: ";
	getline(cin, sentence);
	cout << "String with vowels removed: ";
	for(int idx=0;sentence[idx]!='\0';idx++){
		counter++;
	}
	for(int i=0; i<counter;i++){
		if(sentence[i]=='A'||sentence[i]=='E'||sentence[i]=='I'||sentence[i]=='O'||sentence[i]=='U'||sentence[i]=='a'||sentence[i]=='e'||sentence[i]=='i'||sentence[i]=='o'||sentence[i]=='u'){
			continue;
		}
		cout << sentence[i];
	}
}
