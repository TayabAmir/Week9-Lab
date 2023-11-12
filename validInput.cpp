
#include <iostream>
using namespace std;
bool isAlreadyEntered(int numbers[], int size, int n)
{
    bool isPresent = false;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == n)
        {
            isPresent = true;
        }
    }
    return isPresent;
}
int main()
{
    int size;
    int newSize = 0;
    cout << "Enter the number of elements: ";
    cin >> size;
    int numbers[size];
    cout << "Enter " << size << " numbers, one per line:" << endl;
    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        if (isAlreadyEntered(numbers, newSize, n))
        {
            cout << "Already Entered: " << n << endl;
        }
        else
        {
            numbers[newSize] = n;
            newSize++;
        }
    }
    cout << "Unique numbers entered: ";
    for (int i = 0; i < newSize; i++)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}

