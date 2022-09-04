//Reverse of a number

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number you want to reverse: " << endl;
    cin >> n;

//    int i = 1;
    int que = n;
    int ans = 0;
    while(que != 0)
    {
        int rem = que%10;
        ans = ans*10 + rem;
        que = que/10;
//        cout << rem ;       
    }
    cout << ans;
return 0;
}