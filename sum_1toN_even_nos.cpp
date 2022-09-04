//We have to print sum of 1 to n even numbers...

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the last number: " << endl;
    cin >> n;
    int i = 2, sum = 0;

    while(i <= n)
    {
        if(i%2 == 0)
        {
            sum = sum + i;
        }
        i = i + 1;
    }

    cout << "Your sum is : " << sum << endl;


return 0;
}