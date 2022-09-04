/*solve ncr problem*/
//formula = n! / r! * (n - r)!
//This code is implemented by not using function.. Just a base for implimenting a function

#include<iostream>
using namespace std;

int main()
{
    int n, r;
    cout << "Enter n: " << endl;
    cin >> n;
    cout << "Enter r: " << endl;
    cin >> r;

//n!
    int i = 1;
    int fact_n = 1;
    while(i <= n)
    {
        fact_n = fact_n * i;
        i++;
    }
  //  cout << fact_n << endl;

    i = 1;
    int fact_r = 1;
    while(i <= r)
    {
        fact_r = fact_r * i;
        i++;
    }
  //  cout << fact_r << endl;

    i = 1;
    int fact_n_r = 1;
    while(i <= (n-r))
    {
        fact_n_r = fact_n_r * i;
        i++;
    }
   // cout << fact_n_r << endl;

    int ans = fact_n / fact_r * fact_n_r;
    cout << ans << endl;


return 0;
}