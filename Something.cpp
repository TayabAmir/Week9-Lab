#include<iostream>
using namespace std;
int main(){
	string word = "something";
	string argument;
	cout << "Enter the argument 'a': ";
	getline(cin, argument);
	cout << "Result: " << word  << " " << argument; 
}
