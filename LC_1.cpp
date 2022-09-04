//Summing two numbers such that they add up to target

#include<iostream>
using namespace std;

void createArray(int arr[], int size)
{
    cout << "Enter the elemets: " << endl;
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

void getTarget(int arr[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if (i == j)
            {
                continue;
            }
            if(arr[i] + arr[j] == target)
            {
                cout << i << " " << j;
                break;
            }
        }
    }
}

int main()
{
    cout << "Enter the size of array: " << endl;
    int size, arr[100];
    cin >> size;

    createArray(arr, size);
    displayArray(arr, size);

    cout << "Enter your target: " << endl;
    int target;
    cin >> target;
    getTarget(arr, size, target);
return 0;
}