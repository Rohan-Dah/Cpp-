//Find the element in the array usuing binary search

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

int binarySearch(int arr[], int size, int val)
{
    int start = 0, end = size-1;
    while(start < end)
    {
        int mid = (start + end) / 2;
        if(val == mid)
        {
            return mid;
        }

        else if(val > arr[mid])
        {
            start = mid + 1;
        }

        else if(val < arr[mid])
        {
            end = mid - 1;
        
        }
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int arr[100];
    createArray(arr, size);
    displayArray(arr, size);

    cout << "\nEnter the element to search: " << endl;
    int val;
    cin >> val;

    cout << binarySearch(arr, size, val) << endl;


return 0;
}