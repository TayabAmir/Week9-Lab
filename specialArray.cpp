#include <iostream>
using namespace std;
bool isSpecialArray(int arr[], int size);
main(){
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	int arr[size];
	cout << "Enter " << size << " elements of the array: " << endl;
	for(int i=0; i<size; i++){
		cin >> arr[i];
	}
	
	if(isSpecialArray(arr, size)){
		cout << "The array is special";
	}
	else{
		cout << "The array is not special";
	}
}
bool isSpecialArray(int arr[], int size){
	int counterforEven=0, counterforOdd = 0;
	for(int i=0; i<size; i+=2){
		if(arr[i]%2==0){
			counterforEven++;
		}
	}
	for(int i=1; i<size; i+=2){
		if(arr[i]%2!=0){
			counterforOdd++;
		}
	}
	if(size%2==0){
		if(counterforEven == size/2 && counterforOdd == size/2){
			return true;
		}
		else
			return false;
	}
	if(size%2!=0){
		if(counterforEven == size/2+1 && counterforOdd == size/2){
			return true;
		}
		else
			return false;
	}
	
}
