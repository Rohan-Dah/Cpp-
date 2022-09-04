//Swap every alternate pair of elements in the array 1 2 3 4 5 ---> 2 1 4 3 5 

#include<iostream>
using namespace std;

void createArray(int arr[], int n)
{
    cout << "Enter your elements: " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int n)
{
    cout << "\nYour array is: " << endl;
    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << " " ;
    }
}

void swapAlternate(int arr[], int n)
{
    int i = 0, j = 1;
    while(i == n-1)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i = i + 2;
        j = j + 2;
    }
}

int main()
{
    int n, arr[100];
    cout << "Enter size of the array " << endl;
    cin >> n;
    
    createArray(arr, n);
    displayArray(arr, n);
    swapAlternate(arr, n);
    displayArray(arr, n);
return 0;
}