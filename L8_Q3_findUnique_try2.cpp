//Find unique element in array.

#include<iostream>
using namespace std;

void createArray(int arr[], int size)
{
    cout << "Enter your elements: " << endl;
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int size)
{
    cout << "Your array is: " << endl;
    for(int i = 0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}

int findUnique(int arr[], int size)
{
    int i = 0;
    int j;
    while(i < size)
    {
        j = 0;
        while(j < size)
        {
            if(arr[i] == arr[j] && i != j)
            {
                i++;
                break;
            }
            j++;
        }
        if(j == size)
        {
            return arr[i];
        }
        i++;
    }
}

/*
int findUnique(int *arr, int size)
{
    int j;
    for (int i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
                break;
        }
        if (j == size)
        {
            return arr[i];
        }
    }
    // Write your code here
}
*/

int main()
{
    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;

    int arr[100];
    createArray(arr, size);
    displayArray(arr, size);
    cout << endl;
    cout << findUnique(arr, size) << endl;
    

return 0;
}