/*
#include<iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter n: " << endl;
    cin >> c;
    int count =  0;
    while(c != '$')
    {
        cin >> c;
        count++;
    }
    cout << count;

    //cin is used when we have are not supposed to count input of space or enter becoz they too carry some ascii value. 
return 0;
}
*/

#include<iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter your character: " << endl;
    c = cin.get();
    int count = 0;
    while(c != '$')
    {
        c = cin.get();
        count++;
    }
    cout << count;

    /*
    The output in this case for count will be different becoz this time we will counting space, new line and tab too as characters..
    */
return 0;
}