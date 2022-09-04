//Printing index and summ of either highest row or column (whichever is larger)

#include<iostream>
#include<climits>
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
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void findlargest(int a[][100], int r, int c)
{
    //Assigning sum of individual rows from 2d array into a 1d array.
    int rowSum[c];
    for(int i = 0; i<r; i++)
    {
        int sum = 0;
        for(int j = 0; j <c; j++)
        {
            sum += a[i][j];
        }
        rowSum[i] = sum;
    }

    //Row sum array
    cout << endl;
    cout << "RowSUm array: " << endl;
    for(int i = 0; i < c; i++)
    {
        cout << rowSum[i] << " ";
    }
    
    //Finding highest element in rowSum array
    int highest_in_Rows = INT_MIN;
    int highest_row_index = INT_MIN;
    for(int i = 0; i < c; i++)
    {
        if(rowSum[i] > highest_in_Rows)
        {
            highest_in_Rows = rowSum[i];
            highest_row_index = i;
        }
    }
    cout << "\nHighest element in Row sum: " << highest_in_Rows << endl;

    //Assigning sum of individual columns of 2d array into colSum array
    int colSum[r];
    for(int j = 0; j < c; j++)
    {
        int sum = 0;
        for(int i = 0; i < r; i++)
        {
            sum += a[i][j];
        }
        colSum[j] = sum;
    }

    //Printing colSum array which has sum of all columns
    cout << endl;
    cout << "ColSum array: " << endl; 
    for(int i = 0; i<r; i++)
    {
        cout << colSum[i] << " ";
    }

    //Finding highest element in colSum array
    int highest_in_column = INT_MIN;
    int highest_column_index = INT_MIN;
    for(int i = 0; i<r; i++)
    {
        if(colSum[i] > highest_in_column)
        {
            highest_in_column = colSum[i];
            highest_column_index = i;
        }
    }
    cout << "\nHighest element in colSum array: " << highest_in_column << endl;
    
    cout << endl;

    //Figuring out what is larger, row or column and print the index with it
     if(r>0&&c>0)
    {
    	if(highest_in_Rows >= highest_in_column)
    	{
        	cout << "row " << highest_row_index << " " << highest_in_Rows << endl;
    	}

    	else if(highest_in_column > highest_in_Rows)
    	{
        	cout << "column " << highest_column_index << " " << highest_in_column << endl;
    	}
    }
    else{
         cout<<"row "<<"0 "<<"-2147483648"<<endl;
    }

}

int main()
{
    cout << "Enter the size of rows and columns: " << endl;
    int a[100][100], r, c;
    cin >> r >>  c;

    create2dArray(a, r, c);
    display2dArray(a, r, c);
    findlargest(a, r, c);
return 0;
}