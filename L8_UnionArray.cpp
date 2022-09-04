//Union of two arrays

#include<iostream>
using namespace std;

void createArray(int arr[], int size)
{
    cout << "\nEnter the elements: " << endl;
    for(int i = 0; i<size; i++)
    {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int size)
{
    cout << "\nYour elements are: " << endl;
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void Union(int arr1[], int arr2[], int size1, int size2)
{
    for(int i = size1, j = 0; j < size2; i++, j++)
    {
        arr1[i] = arr2[j];
    }
}

int main()
{
    int size1, size2;
    cout << "Enter size of first array: " << endl;
    cin >> size1;
    cout << "\nEnter size of second array: " << endl;
    cin >> size2;

    int arr1[100], arr2[100];

    createArray(arr1, size1);
    displayArray(arr1, size1);
    createArray(arr2, size2);
    displayArray(arr2, size2);
    Union(arr1, arr2, size1, size2);
    displayArray(arr1, size1+size2);

return 0;
}