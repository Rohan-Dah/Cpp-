/*
Printing total number of characters, digits and spaces in the input and displaying the output of the same...
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your n: " << endl;

    int count_digits = 0;
    int count_spaces = 0;
    int count_char = 0; 
    while(n != '$')
    {
        n = cin.get();      
        
        if(n >= 97 && n <= 122)
        {
            count_char++;
        }

        else if(n >= 48 && n <= 57)
        {
            count_digits++;
        }

        else if(n == 32 && n == 10 && n == 9)
        {
            count_spaces++;
        }
    }
    cout << count_char << " " << count_digits << " " << count_spaces << " " << endl; 
return 0;
}