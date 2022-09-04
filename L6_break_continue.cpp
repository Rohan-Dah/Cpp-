#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    int i = 1;
    while(i <= n)
    {
        if(i == 7)
        {
            break;;
        }
        cout << i << endl;
        i++;
    }
    cout << endl;
    /*
    basically in the above loop we are supposed to print from 1 to n. Condition inside i agar i == 7 hua toh break. That means loop ke bahar aao instantly..No matter what loop we using.
    */

   for(i = 1 ; i <= n ; i++)
   {
        if(i == 7)
        {
            continue;
        }
        cout << i << endl;
   }
   cout << endl;
/*
Here increment for every iteration happens before we trace the loop. 
*/

i = 1;
while(i <= n)
{
    if(i == 7)
    {
        continue;
    }
    cout << i << endl;
    i++;
    /*
    ye loop infinity tak ja raha hai becoz what continue statement does is takaing the cursor back to the start of the loop omitting everything that it is proceeding with.
    Matlab niche ke cout and i++ statements execute hi nahi hue toh increment bhi hua.. Toh i 7 pe hi atak gya
    For loop mein increment upar hota hai before entering any loop not at the bottom so this wont be the problem with for loop
    */
}

   
return 0;
}