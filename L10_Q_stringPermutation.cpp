//Check whether first string is the permutation of second string or not

#include<iostream>
#include<cstring>
using namespace std;

void array(int arr[]);
bool checkPermutation(char str1[], char str2[])
{
    if(strlen(str1) != strlen(str2))
    {
        return false;
    }

    else
    {
        int arr[100] = {0};
        for(int i = 0; str1[i] != '\0'; i++)
        {
            arr[i] = str1[i];
        }
        // array(arr);

        for(int i = 0; str2[i] != '\0'; i++)
        {
            for(int j = 0; j < strlen(str1); j++)
            {
                if(str2[i] == arr[j])
                {
                    arr[j] = 0;
                    break;
                }
            }
        }

        int i = 0;
        while(i < strlen(str1))
        {
            if(arr[i] == 0)
            {
                i++;
            }
            else{
                return false;
            }
        }
        return true;
    }

}

int main()
{
    cout << "Enter the strings: " << endl;
    char str1[100], str2[100];
    cin >> str1 >> str2;
    cout << checkPermutation(str1, str2);

return 0;
}