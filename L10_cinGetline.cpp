//Testing cin.getline function

#include<iostream>
using namespace std;

int main()
{
    // cout << "Enter the string: " << endl;
    char str[100];
    // cin >> str;
    // cout << "String " << str << endl;


    /*cin has a fucntionality to break when encountered by a tab, space or a newline. Thats where cin.getline function is used; it breaks only when it is encountered by a delimeter or a newline character
    cin.get(string_name, length, delimeter)

    Here the first argument is string name which is obvious. input leke kaha store karna hai this is what string name does. Then string length; this is used to take is length tak input lena hai, it always has to be less than the actual string length. Then delimeter (optional argument): this is used to break the input for any of the character you gave it as input. Matlab if you rohan is the string, 6 is the length (1 for null character) and suppose h is the delimeter it will break the input as soon as it encounters h. Default value ofc is the newline character.  
    */

   cout << "Enter your full name: " << endl;
   cin.getline(str, 20, 'h');
   cout << str;

return 0;
}