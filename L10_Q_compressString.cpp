// String compress question: aaabbccdsa ---> a3b2c2dsa

#include <iostream>
#include<cstring>
using namespace std;

void getCompressedString(string str)
{
    string arr = " ";
    int k = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 1;
        for (int j = i; str[j] != '\0'; j++)
        {
            if (str[i] == str[j] && str[j] == str[j + 1])
            {
                count++;
            }
        }

        arr[k] = str[i];
        char cnt = count;
        if (str[i] == str[i + 1])
        {
            arr[k + 1] = cnt;
        }
        if (str[i] != str[i + 1])
        {
            k = k + 2;
        }
    }

    cout << arr << endl;
}

void compress(string str)
{
    int i = 0, count, j; 
    string arr;
    while(str[i] != '\0')
    {
        count = 0;
        j = 0;
        while(str[i] == str[j])
        {
            count++;
            j++;
        }
        // cout << count << " " << j << endl;
        arr[i] = str[i];
        char cnt = count;
        if(count > 1)
        {
            arr[i+1] = cnt;
        }
        i++;
        cout << arr << endl;
    }
}

int main()
{
    cout << "Enter the string: " << endl;
    string str;
    cin >> str;
    cout << str << endl;

    compress(str);

    return 0;
}
