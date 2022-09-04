//Find the number of pair in the array whose sum = given element

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

int pairSum(int arr[], int size, int x)
{
    int totalPair = 0;
    int i, j;
    for(i = 0; i<size; i++)
    {
        for(j = i+1; j<size; j++)
        {
            if(arr[i] + arr[j] == x)
            {
                totalPair++;
                continue;;
            }

            else{
                continue;
            }
        }
    }
    return totalPair;
}

int main()
{
    int size;
    cout << "Enter size of the array: " << endl;
    cin >> size;

    int arr[100];
    createArray(arr, size);
    displayArray(arr, size);

    cout << "Enter the sum of pair: " << endl;
    int x;
    cin >> x;

    cout << "\nTotal pairs: " << pairSum(arr, size, x) << endl;



return 0;
}