//Swapping elements in array 1 2 3 4 5 ---> 5 4 3 2 1 

#include<iostream>
using namespace std;

void createArray(int arr[], int n)
{
    cout << "Enter the elements of your array: " << endl;
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int n)
{
    cout << "\nYour array is: " << endl;
    for(int i= 0; i<n; i++)
    {
        cout << arr[i] << " ";
    } 
}

void reverseArray(int arr[], int n)
{
    int i = 0, j = n-1;
    while(i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int n, arr[100];
    cout << "Enter size of your array: " << endl;
    cin >> n;

    createArray(arr, n);
    displayArray(arr, n);
    reverseArray(arr, n);
    displayArray(arr, n);


return 0;
}