/*Print prefix 
a
ab
abc
abcd
*/

#include<iostream>
using namespace std;

void printPrefixes(char str[])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        for(int j = 0; j<= i; j++)
        {
            cout << str[j];
        }
        cout << endl;
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