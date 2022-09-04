//Find duplicate element present in the array.

#include<iostream>
using namespace std;

void createArray(int arr[], int size)
{
    cout << "Enter the elements: " << endl;
    for(int i = 0; i < size; i++)
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

int findDuplicate(int arr[], int size)
{
    int j;
    for(int i = 0; i<size; i++)
    {
        for(j = 0; j<size; j++)
        {
            if(arr[i] == arr[j] && i != j)
            {
                return arr[i];
            }

            else{
                continue;
            }
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int arr[100];

    createArray(arr, size);
    displayArray(arr, size);
    cout << endl;
    cout << findDuplicate(arr, size);
return 0;
}