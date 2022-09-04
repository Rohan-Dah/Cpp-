//Sorting the element in ascending order.

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
    cout  << "Your elements are: " << endl;
    for(int i = 0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[], int size)
{
    for(int i = 0; i<size-1; i++)
    {
        //finding minimum in the array
        int min = arr[i], minIndex = i;
        for(int j = i+1; j<size; i++)
        {
            if(arr[j] < min)
            {
                min = arr[j];
                minIndex = j;
            }
        }
        //Swapping the minimum element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    int size;
    cout << "Enter size of the array: " << endl;
    cin >> size;

    int arr[100];
    createArray(arr, size);
    displayArray(arr, size);
    cout << "\nSorted array is: " << endl;
    selectionSort(arr, size);
    displayArray(arr, size);


return 0;
}