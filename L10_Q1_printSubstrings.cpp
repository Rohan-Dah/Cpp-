/* Given String: abcd
a
ab
abc
abcd
b
bc
bcd
c
cd
d
*/

#include<iostream>
using namespace std;

void printPrefixes(char str[])
{
    for(int k = 0; str[k] != '\0'; k++)
    {
        for(int i = k; str[i] != '\0'; i++)
        {
            for(int j = k; j <= i; j++)
            {
                cout << str[j];
            }
            cout << endl;
        }
    // cout << endl;
    }    
}

int main()
{
    cout << "Enetr the string: " << endl;
    char str[100];
    cin >> str;

    printPrefixes(str);


return 0;
}