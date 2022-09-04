/*

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your last row number : " << endl;
    cin >> n;
    
    int i = 1;
    int k = 1;
    int val = 1;
    while (k <= i)
    {
        while(k <= n - 1)
        {
            cout << " ";
            k = k + 1;
        }
        cout << endl;
    }
    
    int j = 1;
    while(j <= i)
    {
        cout << val ;
        j = j + 1;
        val = val + 1;
    }
    cout << endl;
    i = i+ 1;
return 0;
}

*/

/*
   1
  23
 456
78910
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the last number of the row : " << endl;
    cin >> n;

    int i = 1;
    while(i <= n)
    {
        int j = 1;
        while(j <= n-1)
        {
            cout << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
        
        int k = 1;
        int v = 1;
        while(k <= i)
        {
            cout << v;
            v = v + 1;
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }

return 0;
}