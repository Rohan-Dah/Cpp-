//Return the highest occuring character

#include<iostream>
#include<cstring>
using namespace std;

char highestReturningCharacter(char str[])
{
    int charCount[256] = {0};
    // int maxCount = 1;
    int k = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        int maxCount = 1;
        for(int j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j] && i != j)
            {
                maxCount++;
            }
        }
        charCount[str[i]] = maxCount;
    }

    int maxCount = charCount[0];
    int maxInd = 0;
    for(int i = 0; i < 256; i++)
    {
        if(charCount[i] > maxCount)
        {
            maxCount = charCount[i];
            maxInd = i;
        }
    }

    char max = maxInd;
    // cout << max << endl;
    return max;
}

int main()
{
    cout << "Enter the string: " << endl;
    char str[100];
    cin >> str;
    cout << str << endl;

    highestReturningCharacter(str);
return 0;
}