//Reverse the string hello world ---> dlrow olleh

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

void reverseString(char str[])
{
    int i = 0, j = strLength(str) - 1;
    while(i < j)
    {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }

}

int main()
{
    cout << "Enter the string: " << endl;
    char str[100];
    cin.getline(str, 50);

    cout << "Your reversed string is: " << endl;
    reverseString(str);
    cout << str << endl;

return 0;
}