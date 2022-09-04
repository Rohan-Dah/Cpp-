//Convert a binary number to its decimal

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the binary number: " << endl;
    cin >> n;

    int que = n;
    int pv = 1;
    int ans = 0;
    while(que != 0)
    {
        int rem = que%10;
        que = que/10;
        ans = ans + rem*pv;
        pv = pv*2;
    }
    cout << ans << endl;

return 0;
}

