#include<iostream>
using namespace std;
bool canPayWithChange(double change[], double totalDue);
main(){
	double change[4];
	double totalDue;
	cout << "Enter quarters: ";
	cin >> change[0];
	cout << "Enter dimes: ";
	cin >> change[1];
	cout << "Enter nickels: ";
	cin >> change[2];
	cout << "Enter pennies: ";
	cin >> change[3];
	cout << "Enter the total amount due: $";
	cin >> totalDue;
	cout << "Can you pay the amount? ";
	if( canPayWithChange(change, totalDue)){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
}

bool canPayWithChange(double change[], double totalDue){
	double sum=0;
	sum = sum + (change[0]/4);
	sum = sum + (change[1]/10);
	sum = sum + (change[2]/20);
	sum = sum + (change[3]/100);
	
	if(sum>=totalDue){
		return true;
	}
	return false;
}
