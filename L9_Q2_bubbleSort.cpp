// Bubble sort algorithm to sort the array

#include <iostream>
using namespace std;

void createArray(int arr[], int n)
{
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int n)
{
    cout << "Your elements are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1 - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main()
{
    cout << "Enter the size of array: " << endl;
    int n;
    cin >> n;

    int arr[100];
    createArray(arr, n);
    displayArray(arr, n);

    cout << "\nYour sorted array is: " << endl;
    bubbleSort(arr, n);
    displayArray(arr, n);
    return 0;
}