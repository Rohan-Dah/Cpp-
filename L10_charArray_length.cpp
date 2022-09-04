//Checking the length of the character array

#include<iostream>
using namespace std;

int charLength(char arr[])
{
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char arr[100];
    cout << "Enter your name: " << endl;
    cin >> arr;

    cout << "Name: " << arr << endl;
    cout << "Length: " << charLength(arr) << endl;
return 0;
}