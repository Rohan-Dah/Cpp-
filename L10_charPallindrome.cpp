//Checking Pallindrome 

#include<iostream>
using namespace std;

int strlen(char str[])
{
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool checkPallindrome(char str[])
{
    int i = 0, j = strlen(str) - 1;
    while(i < j)
    {
        if(str[i] != str[j])
        {
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    char str[10];
    cout << "Enter the word: " << endl;
    cin >> str;
    cout << "Word: " << str;
    cout << "\nPallindrome: " << checkPallindrome(str) << endl;


return 0;
}