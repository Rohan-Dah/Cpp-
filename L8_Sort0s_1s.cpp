//Sort an array that has only two elements: 0s and 1s

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

/*
void sortZerosAndOnes(int arr[], int size)
{
    int i, j;
    for(i=0; i<size; i++)
    {
        for(j = i+1; j<size; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        cout << arr[i] << " " ;
    }
}
*/

//Alternate approach
int sortZerosAndOnes(int arr[], int size)
{
    int count = 0;
    for(int i = 0; i<size; i++)
    {
        if(arr[i] == 0)
        {
            count++;
        }
    }

    for(int i = 0; i<size; i++)
    {
        if(i<count)
        {
            arr[i] = 0;
        }
        else{
            arr[i] = 1;
        }
        cout << arr[i] << " ";
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
    cout << "\nYour sorted 0s and 1s are: " << endl;
    sortZerosAndOnes(arr, size);
    return 0;
}