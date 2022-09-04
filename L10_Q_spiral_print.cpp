//Printing the elements in 2d array spirally

#include<iostream>
using namespace std;

void create2dArray(int a[][100], int r, int c)
{
    cout << "Enter the elements: " << endl;
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            cin >> a[i][j];
        }
    }
}

void display2dArray(int a[][100], int r, int c)
{
    cout << "Your elements are: " << endl;
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void spiralPrint(int a[][100], int r, int c)
{
    cout << "Your spiral display..." << endl;

    int top = 0;
    int bottom = r - 1;
    int left = 0; 
    int right = c - 1;

    while(top <= bottom && left <= right)
    {
        for(int i = left; i <= right; i++)
        {
            cout << a[top][i] << " ";
        }
        top++;

        for(int i = top; i <= bottom; i++)
        {
            cout << a[i][right] << " ";
        }
        right--;

        if(top <= bottom)
        {
            for(int i = right; i >= left; i--)
            {
                cout << a[bottom][i] << " ";
            }
            bottom--; 
        }

        if(left <= right)
        {
            for(int i = bottom; i>=top; i--)
            {
                cout << a[i][left] << " ";
            }
            left++;
        }
    }
}


int main()
{
    cout << "Enter the rows and columns: " << endl;
    int a[100][100], r, c;
    cin >> r >> c;

    create2dArray(a, r, c);
    display2dArray(a, r, c);

    spiralPrint(a, r, c);
    
return 0;
}