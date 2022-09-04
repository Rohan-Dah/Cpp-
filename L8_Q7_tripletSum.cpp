//Sum of triplets

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

int tripleSum(int arr[], int size, int x)
{
    int i, j, k, totalPairs = 0;
    for(i = 0; i<size; i++)
    {
        for(j = i+1; j<size; j++)
        {
            for(k = j+1; k<size; k++)
            {
                if(arr[i] + arr[j] + arr[k] == x)
                {
                    totalPairs++;
                    continue;
                }
            }
        }
    }
    return totalPairs; 
}

int main()
{
    int size;
    cout << "Enter size of the array: " << endl;
    cin >> size;

    int arr[100];
    createArray(arr, size);
    displayArray(arr, size);
    
    cout << "\nEnter the sum of triplets: " << endl;
    int x;
    cin >> x;

    cout << "Total pair: " << tripleSum(arr, size, x) << endl;

return 0;
}