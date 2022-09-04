//Print the max row wise or column wise sum

#include<iostream>
#include<climits>
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

/*
void findLargest(int a[][100], int r, int c)
{
    // Here we have sum of all elements in one row
    int colSum[r];
    int rSum = INT_MIN;
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            rSum += a[i][j];
        }
        colSum[i] = rSum;
        rSum = 0;
    }

    //Here we are figuring out the max value from one row
    int r_maxIndex;
    int rmax = INT_MIN;
    for(int i = 0; i<r; i++)
    {
        if(colSum[i] > rmax)
        {
            rmax = colSum[i];
            r_maxIndex = i;
        }
    }

    //Here we have sum of all elements in one column
    int rowSum[c];
    int cSum = INT_MIN;

    for(int j = 0; j<c; j++)
    {
        for(int i = 0; i<r; i++)
        {
            cSum = a[i][j];
        }
        rowSum[j] = cSum;
        cSum = 0;
    }

    int cmax = INT_MIN;
    int c_maxIndex;
    for(int i = 0; i<c; i++)
    {
        if(rowSum[i] > cmax)
        {
            cmax = rowSum[i];
            c_maxIndex = i;
        }
    }
    
    if(c_maxIndex > r_maxIndex)
    {
        cout << "row " << c_maxIndex << " " << cmax;
    }
    else if(r_maxIndex > c_maxIndex)
    {
        cout << "column " << r_maxIndex << " " << rmax;
    }
}
*/

void findLargest(int a[][100], int r, int c)
{
    //Row Traversing
    
}

int main()
{
    cout <<"Enter the working rows and columns of the 2d array: " << endl;
    int a[100][100], r ,c;
    cin >> r >> c;

    create2dArray(a, r, c);
    findLargest(a, r, c)

return 0;
}