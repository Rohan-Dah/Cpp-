//Print 1 to N nos using functions

#include<iostream>
using namespace std;

void oneToN(int num)
{
    int i = 1;
    while(i <= num)
    {
        cout << i << endl;
        i++;
    }
}

int main()
{
    int n;
    cout << "Enter n : " << endl;
    cin >> n;

    oneToN(n);

    
    return 0;
}