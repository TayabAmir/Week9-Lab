#include<iostream>
#include<string>
using namespace std;
main(){
	string word;
	int asciiCode;
	char asciiCharacter;
	int letter = 0;
	cout << "Enter a String: ";
	getline(cin,word);
	int counter = -1;
	for(int idx=0; word[idx]!='\0'; idx++){
		counter++;
	}
	cout << "Shifted String: ";
	for(int i=counter;i>=0; i--){	
		asciiCode = word[letter];
		asciiCode++;
			if(asciiCode==91){
				asciiCode = 65;
			}
			else if(asciiCode==123){
				asciiCode = 97;
			}
			else if(asciiCode==33){
				asciiCode = 32;
			}
				
		asciiCharacter = asciiCode;
		cout << asciiCharacter;
		letter++;	
	}
}
