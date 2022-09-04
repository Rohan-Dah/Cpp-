//Either sum from 1 to N or Product

#include<iostream>
using namespace std;

int main()
{
    int n, c;
    cout << "Enter the range: " << endl;
    cin >> n;
    cout << "1) Sum" << endl;
    cout << "2) Product" << endl;
    cin >> c;

    if(c == 1)
    {
        int sum = 0;
        for(int i = 1; i<= n; i++)
        {
            sum = sum + i;
        }
        cout << sum << endl;
    }

    else if(c == 2)
    {
        int prod = 1;
        for(int i = 1; i <= n ; i++)
        {
            prod = prod*i;
        }
        cout << prod << endl;
    }

    else{
        cout << -1 << endl;
    }

return 0;
}