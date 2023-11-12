#include<iostream>
using namespace std;
double calculateTotalResistance(double resistance[], int size);
main(){
	int num;
	cout << "Enter the number of resistors in the series circuit: ";
	cin >> num;
	double resistance[num];
	cout << "Enter the resistance values (in ohms) of the " << num << " resistors, one per line: \n";
	for(int i=0; i<num; i++){
		cin >> resistance[i];
	}
	cout << "The total resistance of the series circuit is " << calculateTotalResistance(resistance,num) << " ohms.";
	
}
double calculateTotalResistance(double resistance[], int size){
	double sum=0;
	for(int i=0; i<size; i++){
		sum = sum + resistance[i];
	}
	return sum;
	
}
