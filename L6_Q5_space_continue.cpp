//Print number in the series (3N + 2)that are not multiples of 4 
#include<iostream>
using namespace std;

int main()
{
    int x; //kitne number tak series print karni hai.. Range of series
    cout << "Enter x: " << endl;
    cin >> x;
    int count = 0;

    int i = 1;
    int N = 1;

    while(i <= x)
    {
        int sum = ((3*N) + 2);
        if(sum%4 != 0)
        {
            cout << sum << " ";
        }
        else{
            N++;
            continue;
        }
        N++;
        i++;
    }
/*
    for(int i = 0; i <= x; i++)
    {
        for(int N = 1; N<= 1000; N++)
        {
            int sum = ((3*N) + 2);
            if(sum%4 != 0)
            {
                cout << sum << " "; 
                
            }
            else
            {
                continue;
            }
        }
    }
*/
return 0;
}