//Reversing each word in a sentence..

#include<iostream>
using namespace std;

void reverseEachWord(char str[])
{
    int j;
    int lastWordSpaceIndexStart = 0, lastWordSpaceIndexEnd;
    for(int i = 0; str[i] != '\0'; i++)
    {
        for(j = 0; str[j] != ' '; j++)
        {
            lastWordSpaceIndexEnd = j;
            while(lastWordSpaceIndexStart < lastWordSpaceIndexEnd)
            {
                char temp = str[lastWordSpaceIndexEnd-1];
                str[lastWordSpaceIndexEnd-1] = str[lastWordSpaceIndexStart];
                lastWordSpaceIndexStart = temp;
                lastWordSpaceIndexStart++;
                lastWordSpaceIndexEnd--;
            }
        }    
            i = j + 1;
            cout << str[lastWordSpaceIndexStart];
            lastWordSpaceIndexStart = lastWordSpaceIndexEnd + 1;

    }
}

int main()
{
    cout << "Enter the string: " << endl;
    char str[100];
    cin.getline(str, 100);
    // cout << str << endl;
    reverseEachWord(str);
return 0;
}