//Finding whether the no is prime or not using function..

#include<iostream>
using namespace std;

void checkPrime(int num)
{
    int i = 2;
    int isPrime = 1;
    while(i < num)
    {
        if(num%i == 0)
        {
            cout << "Not Prime" << endl;
            isPrime = 0;
            break;
        }
        i++;
    }
    if(isPrime == 1)
    {
        cout << "Prime" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;

    checkPrime(n);

return 0;
}