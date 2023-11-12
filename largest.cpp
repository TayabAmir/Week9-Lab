#include <iostream>
using namespace std;
int findLargestNumber(int arr[], int size);
main(){
	int num;
	cout << "Enter the number of elements: ";
	cin >> num;
	int arr[num];
	cout << "Enter " << num << " numbers, one per line: "<< endl;
	for(int i=0; i<num; i++){
		cin >> arr[i];
	}
	cout << "The largest number entered is: " << findLargestNumber(arr, num);
}
int findLargestNumber(int arr[], int size){
	int largest = arr[0];
	for(int i=1; i<size; i++){
		if(arr[i]>largest){
			largest = arr[i];
		}
	}
	return largest;
}
