#include<iostream>
using namespace std;

main(){
	int n;
	int arr_size[n];
	
	cout << "Enter the amount of numbers you want to add: ";
	cin >> n;
	cout << endl << endl;
	
	for(int idx = 0; idx < n; idx++){
		cout << "Enter a number: ";
		cin >> arr_size[idx];
	}
	cout << endl;
	
	for (int idx=0; idx < n; idx++){
		cout << arr_size[idx] << endl;
	}
}

