//reverse the string word wise: Welcome to Coding Ninjas ---> Ninjas Coding to Welcome

#include<iostream>
using namespace std;

int length(char str[])
{
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverseStringWordWise(char str[])
{
    int i = 0, j = length(str) - 1;
    while(i < j)
    {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }

    i = 0;
    j = i;
    while(i <= length(str))
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
                i--;
                j++;
            }
            j = blankIndex + 1;
            i = blankIndex + 1;
            continue;
        }
        i++;
    }
}

int main()
{
    cout << "Enter the string: " << endl;
    char str[100];
    cin.getline(str, 100);

    reverseStringWordWise(str);
    cout << str;

return 0;
}