//Printing row wise and column wise 2d arrays

#include<iostream>
using namespace std;

int main()
{
    int a[100][100], r, c;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> r >> c;

    //Taking input
    cout << "Enter elements: " << endl;
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            cin >> a[i][j];
        }
    }

    //Printing row wise
    cout << "Row wise: " << endl;
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    //Printing column wise
    cout << "Column Wise: " << endl;
    for(int j = 0; j<c; j++)
    {
        for(int i = 0; i<r; i++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

return 0;
}