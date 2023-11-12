#include<iostream>
using namespace std;
void reverseNumbers(int arr[], int num){
	
	for(int i=num-1; i>=0; i--)
			cout << " " << arr[i];
			
}
main(){
	int num;
	cout << "Enter the number of elements: ";
	cin >> num;
	
	if(num<=0)
		cout << "Invalid input. Number of elements must be greater than 0.";
	else
	{
		int arr[num];
		cout << "Enter " << num << " numbers, one per line: " << endl;
		for(int i=0; i<num; i++)
			cin >> arr[i];
		cout << "Numbers in reverse order:";
	reverseNumbers(arr, num);
	}
}
