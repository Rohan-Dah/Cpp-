//Series increment decrement. Return true or false

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter total number: " << endl;
    cin >> n;

    int prev;
    cin >> prev;
    int i = 2;
    int isIncreasing = 1;
    int isDecreasing = 0;
    int validity = 1;
    while(i <= n)
    {
        int curr;
        cin >> curr;
        if(prev < curr && validity == 1 && isIncreasing == 1) //Increasing
        {
            prev = curr;
            isIncreasing = 1;
            i++;
        }

        else if(curr < prev && validity == 1) //Decreasing
        {
            prev = curr;
            isIncreasing = 0;
            i++;
        }

        else
        {
            validity = 0;
//            cout << "false" << endl;
            i++; 
        }        
    }

    if(validity == 1)
    {
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }    
    
return 0;
}