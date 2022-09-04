//Finding leader in the arr

#include<iostream>
using namespace std;

void createArray(int arr[], int size)
{
    cout << "Enter the elements: " << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int size)
{
    cout << "Your elements are: " << endl;
    for(int i = 0; i < size; i++)
    { 
        cout << arr[i] << " ";
    }
}

void displayLeader(int arr[], int size)
{
    int leadArr[100];
    int i = 0;
    while(i < size)
    {
        int j = i + 1;
        while(j < size)
        {
            if(arr[i] > arr[j])
            {
                j++;
            }
            i++;
            j++;
        }
        cout << arr[i] << " ";
        i++;
    }
}

int main()
{
    cout << "Enter the size of arr: "<< endl; 
    int size, arr[100];
    cin >> size;

    createArray(arr, size);
    displayArray(arr, size);
    displayLeader(arr, size);

return 0;
}