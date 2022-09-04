//Reverse each word in the string  Hello, I am Aadil! ---> ,olleH I ma lidaA

#include<iostream>
#include<cstring>
using namespace std;

void reverseEachWord(char str[])
{
    int i = 0, j = 0;
    while(i <= strlen(str))
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            int blankIndex = i;
            i--; 
            while(j < i)
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                j++;
                i--;
            }
            i = blankIndex + 1;
            j = blankIndex + 1;
            continue;
        }
        i++;
    }  
    cout << str << endl;
}

int main()
{
    cout << "Enter the string: " << endl;
    char str[100];
    cin.getline(str, 100);
    cout << str << endl;
    reverseEachWord(str);
return 0;
}