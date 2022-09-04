//Taking input and output from array

#include<iostream>
using namespace std;

int main()
{
    int input[5];

    for(int i = 0; i < 5; i++)
    {
        cin >> input[i];
    }

    for(int i = 0; i < 5; i++)
    {
        cout << input[i] << endl;
    }
return 0;
}