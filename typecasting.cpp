#include <iostream>
using namespace std;
int main()
{
    /*
    int a, b;
    cin >> a;
    cin >> b;
    cout << (a + b);
    return 0;
    */

   
   char b = 'a';
   char c = b + 1;
   int s;
   cout << c << endl;
   s = c;
   cout << s << endl << endl << endl;

   int i = 'c';
   cout << i << endl << endl << endl;

   char x = 74;
   cout << x << endl;


      
      //cout << ('a' + 1) << endl;

/*
   //This is the example of typecasting...
   // What is being done here is b is a character variable with value 'a'. Then 'c' is another character variable with value b + 1, ie a + 1 ie ascii of a and 1 ie 97 + 1 ie 98..
   This 98 is stored in c. Now when we try to print c, c is a char variable so compiler is aware that we have to convert the given number into the character it is assigned the ascii of. Compiler gets the number 98. 'b' is the key that as ascii of 98 Therefore b will be printed.

   Now in the case of int s (line 16). We have assigned s = c ie the ascii of c is stored in s. c has the ascii value of 98 within it. And when we try to print s the system knows this is an integer variable and we are supposed to print the number as it is and not the ascii value.
   In line 21 we are storing ascii of c in integer i. This syntax is possible...
*/
   //When you add a character and an integer the answer is an integer. It will consider the ascii value of that character that is to be added..
   
}