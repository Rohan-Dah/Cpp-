#include<iostream>
using namespace std;

int main()
{
    char x;
    int xn;
    cin >> x;
    xn = x;

    if(xn >= 65 && xn <= 90)
    {
        cout << "1" << endl;
    }

    else if (xn >= 97 && xn <= 122)
    {
        cout << "0" << endl;
    }

    else{
        cout << "-1" << endl;
    }    
}