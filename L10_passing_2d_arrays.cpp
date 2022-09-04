//passing 2d arrays into functions as they arent stored in the memory as we think they do

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
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a[100][100], r, c;
    cout << "Enter the size of rows and columns: " << endl;
    cin >> r >> c;
    //the thing that we we took the input of are the actual working indices not the total size of the array.
    create2dArray(a, r, c);
    display2dArray(a, r, c);

    /*
    The fact that we have to pass the second column element in the 2d array becoz the array is stored in the memory exactly as the 1d array. The rows and columns is just for better understanding of the placement of the elements.
    SUppose we are placeing the element at (2,1) ---> a[2][1] that means position second in the third row it has to undergo a basic calculation with the formula (c * i + j) 
    Total working elements are r*c that means all the other places in the array are 0 as that is what property of array says. 
    
    1 2 0 0 0 0 0 0 0 0 0..upto column index 99 
    3 4 0 0 0 0 0 0 0 0 0..
    5 6 0 0 0 0 0 0 0 0 0..
    0 0 0 0 0 0 0 0 0 0 0..
    .
    .
    .upto row index 99

    here we want to return 6 that is present at 2, 1. As this array is linearly stored as a linear allocation of size 100*100 is done.
    1 2 0 0 0 0 . . 3 4 0 0 0 . . 5 6 . . . 

    100 * 
    

    */


return 0;
}