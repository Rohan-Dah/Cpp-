
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
    int val = 1;
    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {
            cout << val;
            j = j + 1;
            val = val + 1;
        }
        cout << endl;
        i = i + 1;


    }
    
return 0;
}
