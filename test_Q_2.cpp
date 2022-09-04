//Find the shortest word in the string

#include<iostream>
#define str_len 100
#include<cstring>
using namespace std;

void minWordLength(string str)
{
    int i = 0, j = 0;
    int minLength;
    char minChar[100];
    while(str[i] != '\0')
    {
        if(str[i] == ' ' || str[i] == '\0'-1)
        {
            // int j = 0;
            minLength = i - j;
            cout << minLength << endl;
            for(int s = 0; s < minLength; s++)
            {
                minChar[s] = str[]
            }
            {
                minChar[]
            }
            j = i + 1;           
        }
        i++;
    }
}

int main()
{
    cout << "Enter the string: " << endl;
    string str;
    getline(cin, str);
    cout << str << endl;
    minWordLength(str);

return 0;
}