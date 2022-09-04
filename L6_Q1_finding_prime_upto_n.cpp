//Find prime number from 2 to n

#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter n : " << endl;
    cin >> n;

    for(int i = 2 ; i <= n ; i++)
    {
        int isPrime = 0;
        int j = 2;
        for(; j < i ; j++)
        {
            if(i%j == 0)
            {
                isPrime = 1;
                continue;
            }
        }
        if(isPrime == 0)
            {
                cout << j << " ";
            }
    }
return 0;
}