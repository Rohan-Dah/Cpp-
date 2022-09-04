//Checking Array Rotation

#include<iostream>
using namespace std;

void createArray(int arr[], int size)
{
    cout << "Enter the elements: " << endl;
    for(int i = 0; i<size; i++)
    {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int size)
{
    cout << "Your elements are: " << endl;
    for(int i = 0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}

int checkArrayRotation(int arr[], int size)
{
    int i = 0, j = 1;
    for (; i<size, j<size; i++, j++)
    {
        if(arr[j] < arr[i])
        {
            return j;
        }
    }
    return 0;
}

int main()
{
    cout << "Enter the size of array: " << endl;
    int size;
    cin >> size;

    int arr[100];

    createArray(arr, size);
    displayArray(arr, size);

    cout << "\nArray Rotation index: " << checkArrayRotation(arr, size) << endl;


return 0;
}