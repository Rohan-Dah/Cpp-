//Merging two sorted arrays 

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

void mergeSorted(int arr1[], int arr2[], int arr3[], int size1, int size2, int size3)
{
    int i = 0, j = 0, k = 0;
    while(i < size1)
    {
        while(j < size2)
         {     
            if(arr1[i] < arr2[j])
            {
                arr3[k] = arr1[i];
                i++;
                k++;
                break;                     
            }    
            if(arr1[i] > arr2[j])
            {
                arr3[k] = arr2[j];
                j++;
            }
            k++;           
        }
    }
}

int main()
{
    cout << "Enter size of first array: " << endl;
    int size1;
    cin >> size1;
    cout << "\nENter size of second array: " << endl;
    int size2;
    cin >> size2;

    int arr1[100], arr2[100], arr3[100] = {0};

    createArray(arr1, size1);
    displayArray(arr1, size1);

    createArray(arr2, size2);
    displayArray(arr2, size2);

    cout << "Sorted array: " << endl;
    mergeSorted(arr1, arr2, arr3, size1, size2, size1+size2);
    displayArray(arr3, size1+size2);

return 0;
}