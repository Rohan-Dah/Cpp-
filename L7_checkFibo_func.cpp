// Check whether the no is in fibonacci series or not
// 0 1 1 2 3 5 8 13 21 34

#include <iostream>
using namespace std;

bool checkFibo(int n)
{
    if (n == 0 || n == 1)
        return true;

    int a = 0, b = 1;

    while (a < n)
    {
        int c = a + b;
        if (c == n)
            return true;
        if (c > n)
            return false;
        a = b;
        b = c;
    }
}    

    int main()
    {
        int n;
        cout << "Enter n : " << endl;
        cin >> n;

        bool ver = checkFibo(n);
        cout << ver << endl;

        return 0;
    }