
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the last number of the row : " << endl;
    cin >> n;

    int i = 1;
    int value = 1;
    int x = 1;
    while(i <= n)
    {
        int k = 1;        
        while(k <= n-x)
        {
            cout << " ";
            k = k + 1;
        }
        
        int j = 1;
        while(j <= i)
        {
            cout << value;
            j = j + 1;
            value = value + 1;
        }
        cout << endl;
        i = i + 1;
        x = x + 1;
    }

return 0;
}