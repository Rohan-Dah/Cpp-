/*

12345    54321
1234  **  4321
123  ****  321
12  ******  21
1  ********  1

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
//    cout << "Enter n: " << endl;
    cin >> n;

    int i = 1;
    while(i <= n)
    {
        int j = 1;
        int val = 1;
        while(j <= n - i + 1)
        {
            cout << val;
            j++;
            val++;
        }

        int star = 2;
        while(star <= i)
        {
            cout << "*";
            star = star + 1;
        }

        star = 2;
        while(star <= i)
        {
            cout << "*";
            star = star + 1;
        }

        j = 1;
        val = n - i + 1;
        while(j <= n - i + 1)
        {
            cout << val;
            val--;
            j++;
        }


        cout << endl;
        i++;

    } 
return 0;
}