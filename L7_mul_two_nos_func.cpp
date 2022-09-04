//Multply two nos using function

#include<iostream>
using namespace std;

int multiply(int num1, int num2)
{
    int prod = num1*num2;
    return prod;
}

int main()
{
    int a, b;
    cout << "Enter two nos:" << endl;
    cin >> a >> b;

    int prod = multiply(a , b);
    cout << prod;

return 0;
}