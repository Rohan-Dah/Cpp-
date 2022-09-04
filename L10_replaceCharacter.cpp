//Replace character in the string

#include<iostream>
using namespace std;

void replaceCharacter(char str[], char c1, char c2)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == c1)
        {
            str[i] = c2;
        }
    }
}

int main()
{
    char str[20];
    cout << "Enter the string: " << endl;
    cin >> str;

    cout << "\nEnter the character that you want to replace: " << endl;
    char c1, c2;
    cin >> c1;
    cout << "\nENter the character that you want to replace it with: " << endl;
    cin >> c2;
    replaceCharacter(str, c1, c2);
    cout << str;
    
return 0;
}