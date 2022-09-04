#include<iostream>
using namespace std;

int fact(int num)
{
    int ans = 1;
    int i = 1;
    while(i <= num)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    int answer = fact(n);
    cout << answer << endl;
    /*
    If we try to call ans vavrible it wont be possible becoz it is a local variable and its scope is just limited to that function where it is declared.. Similar will be the case if we try to print answer in fact function.. It has its scope limited to main function only... Its like particular sets of memories are allocated to the fucntions like main, fact and others.. And similar memory allocations are done. 'a' variable in main will be different than 'a' variable in fact function..
    */

return 0;
}