#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    /*
    String Length (strlen(str))
    char str[100];
    cout << "Enetr the string: " << endl;
    cin >> str;
    int len = strlen(str);
    // This function calculates the length fo the string as obvious as its name suggests.
    */

   /*
   String Compare (strcmp(input1, input2))
    char input1[100], input2[100];
    cout << "Enter first and secodn string: " << endl;
    cin >> input1 >> input2;
    cout << strcmp(input1, input2);
    */

    // This function tells whether both strings are similar or not. If they are similar it will return 0 or else it will return any integer. This returns any integer becoz it subracts the ascii values of the chaarcter of given strings. 
    // cout << len << endl;

  
    // String copy (strcpy(input1, input2))
    cout << "Enter first and second string: " << endl;
    char input1[100], input2[100];
    cin >> input1 >> input2;
    cout << input1 << endl;
    strcpy(input1, input2);
    cout << input1 << endl;
    // What this does is argument 2 ke andar ka jo bhi data hai woh arg 1 ke andar daalna hai.. The thing different in this is it also copies the null character present in the second arg into the first.
   
    // Another way to use string copy:
    strcpy(input1, "Hello");
    cout << "Latest: " << input1 << endl;
    // Directly copying from provided stringed argument rather than a variable

    strncpy(input1, input2, 3);
    cout << "ncpy: " << input1 << endl;
    // Here the fucn strncpy copies first n(third arg) strings from second input variable or string to the destination string. 

     



    
return 0;
}