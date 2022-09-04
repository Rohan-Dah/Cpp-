//Trim all the spaces in between the characters

#include<iostream>
using namespace std;

int strLength(char str[])
{
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void trimSpaces(char str[])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            for(int j = i; j < strLength(str); j++)
            {
                str[j] = str[j+1];
            }
        }
    }
}
    

int main()
{
    cout << "Enter the string: " << endl;
    char str[100]; 
    cin.getline(str, 100);
    cout << "normal string: " << str << endl;
    cout << "Str len: " << strLength(str) << endl;
    
    
    cout << "trimmed string: " << endl;
    trimSpaces(str);
    cout << str << endl;



return 0;
}