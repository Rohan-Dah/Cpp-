#include<iostream>
using namespace std;

void createArray(int input[], int n)
{
    cout << "Enter the elements: " << endl;
    for(int i = 0; i<n; i++)
    {
        cin >> input[i];
    }
}

void displayArray(int input[], int n)
{
    cout << "Your elements are: " << endl;
    for(int i = 0; i<n; i++)
    {
        cout << input[i] << " ";
    }
}

void selectionSort(int input[], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        //finding minimum element
        int minElement = input[i];
        int minIndex = i;
        for(int j = i+1; j<n; j++)
        {
            if(input[j] < minElement)
            {
                minElement = input[j];
                minIndex = j;
            }
        }

        //Swapping the elements
        int temp = input[i];
        input[i] = input[minIndex];
        input[minIndex] = temp;
    }

    //Here we firstly find minimum element from the given array and swap that with the element at that index
}

int binarySearch(int input[], int n, int val)
{
    int start = 0, end = n - 1;
    while(start <= end)
    {
        int mid = (start + end) / 2;
        if(val == input[mid])
        {
            return mid;
        }

        else if(val > input[mid])
        {
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    cout << "Enter the size of array: " << endl;
    int n;
    cin >> n;

    int input[100];
    createArray(input, n);
    displayArray(input, n);
    cout << "\nYour sorted array is: " << endl;
    selectionSort(input, n);
    displayArray(input, n);

    cout << "\nEnter the element you want to search for Binary Search: " << endl;
    int val;
    cin >> val;
    cout << "Element status: " << binarySearch(input, n, val);

return 0;
}