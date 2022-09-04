#include<iostream>
using namespace std;

int main()
{
    int a = 0, b = -10, c = 10;

    cout << !a << endl;
    cout << !b << endl;
    cout << !c << endl;
/*
    //Here negation operator will just consider either a non zero number or a zero number.
    on line 8, it will consider !a as negation of 0. As value of a is zero. Output will be 1..
    on line 9, it will consider !b as negation of -10. this means negation of any non zero value.. This means negation of something, that will be 0.
    on line 10, it will consider !c as negation of 10. This means negatpin of any non zero value.. This means negation of something, that will be 0. It will exactly be like line 9...
*/    

return 0;
}