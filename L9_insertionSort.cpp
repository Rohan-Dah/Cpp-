//Sort the given array using insertion sort

#include<iostream>
using namespace std;

void createArray(int arr[], int n)
{
    cout << "ENter the elements: " << endl;
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int n)
{
    cout << "Your elements are: " << endl;
    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int n)
{
    for(int i = 1; i<n; i++)
    {
        int current = arr[i];
        int j;
        for(j = i-1; j>=0; j--)
        {
            if(current < arr[j])
            {
                arr[j+1] = arr[j];
            }

            else{
                break;
            }
        }
        arr[j+1] = current;
    }
}

/*
Basically in insertion sort shifting happens matlab ek ek element ko current element se compare karke (current element will start from 1 and will end at size of the array). Fir usse ek element back se compare hoga, agar bada hai toh ek right shift then again uske left se compare hoga until the second loop which is a decreasing loop gets till -1 or 0 which is start of the array.
*/

int main()
{
    cout << "ENter the size of array: " << endl;
    int n;
    cin >> n;

    int arr[100];
    createArray(arr, n);
    displayArray(arr, n);

    cout << "\nYour sorted array is: " << endl;
    insertionSort(arr, n);
    displayArray(arr, n);
return 0;
}