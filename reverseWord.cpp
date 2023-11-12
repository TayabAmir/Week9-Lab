#include<iostream>
using namespace std;

main(){
	string word;
	cout << "Enter a string: ";
	cin >> word;
	int counter = -1;
	for(int idx=0; word[idx]!='\0'; idx++){
		counter++;
	}
	cout << "Reversed string: ";
	for(int i=counter;i>=0; i--){
		cout << word[i];
	}
}
