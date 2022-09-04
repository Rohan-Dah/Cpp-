//Nth Fibonacci number

#include<iostream>
using namespace std;

int main()
{
    int n;
    int a = 0;
    int b = 1;
    int c = 0;

    cout << "Enter your n: " << endl;
    cin >> n;

    for(int i = 0 ; i < n ; i++)
    {
        c = a + b;
//        cout << a << " ";
        a = b;
        b = c;
    }
//   cout << "Your nth fibonacci number is: " << a << endl;
    
    
return 0;
}