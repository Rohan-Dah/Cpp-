#include <iostream>
using namespace std;

void createArray(int arr[], int n)
{
    cout << "Enter your elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int n)
{
    cout << "\nYour array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int findUnique(int arr[], int n)
{
    int totDup = 0;
    int i = 0;
    int j;
    for (; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                break;
            }
        }
    }

    if (j == n)
    {
        return arr[i];
    }

    //    cout << "Total unique elements = " << n - totDup << endl;
}

int findUnique(int *arr, int size)
{
    int j;
    for (int i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
                break;
        }
        if (j == size)
        {
            return arr[i];
        }
    }
    // Write your code here
}
int main()
{
    int n, arr[100];
    cout << "Enter size of the array " << endl;
    cin >> n;

    createArray(arr, n);
    displayArray(arr, n);
    cout << endl;
    cout << findUnique(arr, n) << endl;

    return 0;
}