#include<iostream>
using namespace std;

int A(int n)
{
    n = n + 1;
    return n;
}

int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    A(n);
    cout << n << endl;
    //If we try to execute this line we will get the output as n that we cin in line 13 not the one that went through different processes when passed in a function..
    //The thing that happened here is we passed the copy of n to a function and made changes in that and we arent printing the  copy that underwent changes but the original value that we sent for the copy. This is called pass by value by a function. If we want to use the varible with changes we have to store it in some other variable and then print its value...
return 0;
}