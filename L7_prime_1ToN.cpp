//Printing Prime numbers from 1 to N

#include<iostream>
using namespace std;

bool IsPrime(int n) //aisa function jo prime number pass hua hoga toh wo number return karega agar nhi toh kuch return nhi karega..
{
    int i = 2;
    while(i < n)
    {
        if(n%i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the last range number: " << endl;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(IsPrime(i))
        {
            cout << i << endl;
        }    
    }
return 0;
}