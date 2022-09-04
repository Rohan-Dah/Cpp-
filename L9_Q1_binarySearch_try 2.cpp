//Finding the element usnign binary Search

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
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}

int binarySearch(int arr[], int size, int val)
{
    int start = 0, end = size - 1;
    while(start <= end)
    {
        int mid = (start + end) / 2;
        if(val == arr[mid])
        {
            return mid;
        }

        else if(val > arr[mid])
        {
            start = mid + 1;
        }

        else{
            end = start - 1;
        }
    }
    return -1;
}

int main()
{
    cout << "Enter the size of the array: " << endl;
    int size;
    cin >> size;

    int arr[100];
    createArray(arr, size);
    displayArray(arr, size);

    int val;
    cout << "\nEnter the element to find: " << endl;
    cin >> val;

    cout << binarySearch(arr, size, val) << endl;

return 0;
}