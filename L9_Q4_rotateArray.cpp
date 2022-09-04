//Rotate array from n

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

void rotate(int arr[], int size, int n)
{
    int temp[100] = {0};
    int k = 0;
    for(int i = n; i<size; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for(int i = 0; i<n; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    
    int j = 0;
    for(int i = 0; i<size; i++)
    {
        arr[i] = temp[j];
        j++;
    }
}

int main()
{
    cout << "Enter the size of array: " << endl;
    int size;
    cin >> size;

    int arr[100];

    createArray(arr, size);
    displayArray(arr, size);

    cout << "\nEnter the index from where you want to rotate: " << endl;
    int n;
    cin >> n;
    rotate(arr, size, n);
    displayArray(arr, size);

return 0;
}