//Printing the elements in 2d array in sin wave format

#include<iostream>
using namespace std;

void create2dArray(int a[][100], int r, int c)
{
    cout << "Enter the elements: " << endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
}

void display2dArray(int a[][100], int r, int c)
{
    cout << "Your elements are: " << endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void wavePrint(int a[][100], int r, int c)
{
    cout << "Column traversal normal..." << endl;
    
    for(int j = 0; j < c; j++)
    {
        if(j%2 == 0)
        {
            for(int i = 0; i < r; i++)
            {
                cout << a[i][j] << " ";
            }
        }

        else if(j%2 != 0)
        {
            for(int i = r-1; i>=0; i--)
            {
                cout << a[i][j] << " ";
            }
        }
    }
}

int main()
{
    cout << "Enter the size of rows and columns: " << endl;
    int a[100][100], r, c;
    cin >> r >> c;

    create2dArray(a, r, c);
    display2dArray(a, r, c);
    wavePrint(a, r, c);

return 0;
}