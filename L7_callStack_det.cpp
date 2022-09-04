#include<iostream>
using namespace std;

void B()
{
    cout << 3 << endl;
}

void A(int a)
{
    cout << 2 << endl;
    B();
    cout << 5 << endl;
}

int main()
{
    int x = 10;
    cout << 10 << endl;
    A(x);
return 0;
}

/*
Call stack means in what order the functions are being called uska opposite order.. That means sabse pehle traversing main se start hogi then line 19 execute hogi, then A call hua fir A mein gaye then uska content print kiya then B mein gaye fir uska content print kiya then vapas A() mein aye then uska bacha hua content print kiya then main mein aake end kiya..

Call stack will contain these three functions main, A, B
Firstly main will be pushed in the call stack then A and then B.. yahi order mein functions end honge..
Firstly B will be returned then A and then main..So stack will have
| B     |
| A     |
| main  |
 -------
*/