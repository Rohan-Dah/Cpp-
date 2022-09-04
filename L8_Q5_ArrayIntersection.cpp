//Finding the intersection in the array

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
    for(int i = 0; i <size; i++)
    {
        cout << arr[i] << " ";
    }
}

int intersection(int arr1[], int arr2[], int size1, int size2)
{
    int i , j;
    for(i = 0; i<size1; i++)
    {
        for(j = 0; j<size2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                return arr1[i];
            }
            else{
                continue;
            }
        }
    }
}

int main()
{
    int size1,size2;
    cout << "Enter the size of 1st array: "  << endl;
    cin >> size1;
    cout << "Enter the size of 2nd array: " << endl;
    cin >> size2;

    int arr1[100], arr2[100];
    
    createArray(arr1, size1);
    displayArray(arr1, size1);

    createArray(arr2, size2);
    displayArray(arr2, size2);
    cout << endl;
    cout << intersection(arr1, arr2, size1, size2);

return 0;
}