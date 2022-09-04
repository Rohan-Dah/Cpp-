//Remove all occurances from occurances from a string

#include<iostream>

using namespace std;

void removeAllOccurances(char str[], char c)
{
    // cout << "Character: " << c << endl;
    int i;
    int currentIndex = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != c)
        {
            str[currentIndex] = str[i];
            currentIndex++;
        }
    }
    str[currentIndex] = '\0';
}

int main()
{
    cout << "Enter the string: " << endl;
    char str[100];
    cin.get(str, 100);
    cout << str << endl;

    cout << "Enter the character to remove: " << endl;
    char c;
    cin >> c;
    removeAllOccurances(str, c);
return 0;
}