/*
#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 2; i = i + 1) {
     for(int j = 0; j < 2; j = j + 1) {
          if (j == 1)
              break;
          cout << j << " ";
      }
 } 
return 0;
}
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 4;
    for(int i = 1 ; i <= 10 ; i++)
    {
        if (i > n)
        {
            cout << i << " is Greater than 4" << endl;
            break;
        }
        cout << i << " is smaller than 4" << endl;
    }
return 0;
//When we use a break statement we completely come out of the loop and completely ignore what is proceeding that loop...
//Whenever a compiler come across a break statement it comes out of the loop without carim for anything else...
}