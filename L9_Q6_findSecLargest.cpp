//Finding second largest element in the array

#include<iostream>
#include<climits>
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

int findSecondLargest(int arr[], int size)
{
    int largest = INT_MIN;
    int secLar = INT_MIN;

    for(int i = 0; i<size; i++)
    {
        if(arr[i] > largest)
        {
            if(largest > secLar)
            {
                secLar = largest;
            }
            largest = arr[i];
        }
    }
    return secLar;
}

int main()
{
    cout << "Enter the size of array: " << endl;
    int size;
    cin >> size;

    int arr[100];

    createArray(arr, size);
    displayArray(arr, size);
    
    cout << "\nSecond Largest element: " << findSecondLargest(arr, size) << endl;
return 0;
}