#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number to check: " << endl;
    cin >> n;

    int d = 2;
    int isPrime = 1;

    while(d < n)
    {
        if(n%d == 0)
        {
            cout << "The number is not Prime..." << endl;
            isPrime = 0;
            break;
        }
          d =  d + 1;
    }
    if(isPrime == 1)
        {
            cout << "Number is Prime" << endl;
        }

return 0;
}