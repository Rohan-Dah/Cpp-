//ncr using function

#include<iostream>
using namespace std;

int factorial(int num)
{
    int i = 1;
    int fact = 1;
    while(i <= num)
    {
        fact = fact * i;
        i++;
    }
    return fact;
}

int main()
{
    int n, r;
    cout << "Enter n: " << endl;
    cin >> n;
    cout << "Enter r: " << endl;
    cin >> r;

    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n-r);

    int ans = fact_n / fact_r * fact_n_r;
    cout << ans << endl;

return 0;
}