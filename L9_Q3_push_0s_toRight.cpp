//Push all the zeros in the array to the rightmost of array without damaging the order of nonzero elements

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

void pushZerosRight(int arr[], int size)
{
    int temp[100] = {0};
    int k = 0;
    for(int i=0; i<size; i++)
    {
        if(arr[i] != 0)
        {
            temp[k] = arr[i];
            k++;
        }
    }
    // arr = {0};
    for(int i = 0; i<size; i++)
    {
        arr[i] = temp[i];
    }

}

void pushZeroesEnd(int *input, int size)
{
    //Write your code here
   // int temp[100] = {0};
    int k = 0;
    for(int i=0; i<size; i++)
    {
        if(input[i] != 0)
        {
            input[k++] = input[i];
            
        }
    }
    // arr = {0};
    // 
  while (k < size)
        input[k++] = 0;
}
//for(int i = 0; i<size; i++)
    // {
    //     input[i] = temp[i];
    // }


int main()
{
    cout << "Enter the size of array: " << endl;
    int size;
    cin >> size;

    int arr[100];

    createArray(arr, size);
    displayArray(arr, size);

    cout << "\nRight pushed zeros: " << endl;
    pushZerosRight(arr, size);
    displayArray(arr, size);
return 0;
}

/*Solution by a TA

void pushZeroesEnd(int *input, int size)
{
    //Write your code here
    int temp[size];
    int k = 0;
    for(int i=0; i<size; i++)
    {
        if(input[i] != 0)
        {
            temp[k] = input[i];
            k++;
        }
    }
    for(int i=k; i<size; i++){
        temp[i] = 0;
    }
    // arr = {0};
    for(int i = 0; i<size; i++)
    {
        input[i] = temp[i];
    }

}
*/