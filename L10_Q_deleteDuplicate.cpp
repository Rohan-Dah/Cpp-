//Deleting all the duplicate characters

#include<iostream>
using namespace std;

void deleteDuplicate(char str[])
{
    int lastCharIndex = 0;
    char lastChar = str[0];
    for(int i = 1; str[i] != '\0'; i++)
    {
        if(str[i] != lastChar)
        {
            lastCharIndex++;
            str[lastCharIndex] = str[i];
            lastChar = str[lastCharIndex];
        }
    }
    str[lastCharIndex+1] = '\0';
    // cout << str;
    
}

int main()
{
    cout << "Enter the string: " << endl;
    char str[100];
    cin >> str;
    deleteDuplicate(str);

return 0;
}