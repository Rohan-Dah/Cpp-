//Sort 0s 1s and 2s in the given array

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

void sortZerosOnesTwos(int arr[], int size)
{
    int l = 0, m = 0;
    int h = size - 1;
    while(m<=h)
    {
        if(arr[m] == 0)
        {
            int temp = arr[m];
            arr[m] = arr[l];
            arr[l] = temp;
            l++;
            m++;
        }

        else if(arr[m] == 2)
        {
            int temp = arr[m];
            arr[m] = arr[h];
            arr[h] = temp;
            h--;
        }

        else{
            m++;
        }
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

    cout << "\nSorting zeros ones twos: " << endl;
    sortZerosOnesTwos(arr, size);
    displayArray(arr, size);
    

return 0;
}