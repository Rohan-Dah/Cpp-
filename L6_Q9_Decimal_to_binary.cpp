//Convert the given decimal number to binary
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your decimal number: " << endl;
    cin >> n;
    long int que = n;
    long int ans = 0;
    long int pv = 1;
    while(que != 0)
    {
        long int rem = que%2;
        que = que/2;
        ans = ans + rem*pv;
        pv = pv*10;
    }
    cout << ans << endl;
/*
    que = ans;
    while(que != 0)
    {
        long int rem = que%10;
        que = que/10;
        cout << rem;
    }
*/    
return 0;
}