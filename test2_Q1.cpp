//Printing 1st row in the 2d array row times 2nd row in the 2d array row - 1 times and so on

#include<iostream>
using namespace std;

void createArray(int arr[][100], int r , int c)
{
    cout << "Enter the elements: " << endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void displayArray(int arr[][100], int r, int c)
{
    cout << "Your elements are: " << endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printRows(int arr[][100], int r, int c)
{
    // int printCount = 0;
    for(int i = 0; i < r; i++)
    {
        for(int k = 0; k < c - i; k++)
        {
            for(int j = 0; j < c; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        } 
           
    }
}

int main()
{
    cout << "Enter the no of rows and columns in the wd array: " << endl;
    int r, c;
    cin >> r >> c;
    int arr[100][100];

    createArray(arr, r, c);
    // displayArray(arr, r, c);
    printRows(arr, r, c);

return 0;
}