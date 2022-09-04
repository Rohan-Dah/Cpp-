//Print sum column wise

#include<iostream>
using namespace std;

int main()
{
    cout << "Enter the rows and columns: " << endl;
    int a[100][100], r, c;
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
    
    int sum = 0;

    for(int j = 0; j < c; j++)
    {
        for(int i = 0; i < r ; i++)
        {
            sum += a[i][j];
        }
        cout << sum << " ";
        sum = 0;
    }
return 0;
}