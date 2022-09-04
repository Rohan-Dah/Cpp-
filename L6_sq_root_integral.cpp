//Printing square roots from 1 to N

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;

    int i = 1;
    int x = 1;
    while(i <= n)
    {
        int x = i*i;
        if(x <= n)
        {
            i++;
            continue;
        }
        break;
    }
    cout <<(i-1) << endl;

return 0;
}