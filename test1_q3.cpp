#include<iostream>
using namespace std;
#include<climits>

int main()
{
    int max = INT_MIN, secMax = INT_MIN;
    int n;
//    cout << "Enter total nums: " << endl;
    cin >> n;
    int i =1, num;
    while(i <= n)
    {
        cin >> num;
        if(num > max)
        {
            secMax = max;
            max = num; 
        }
        else if(num > secMax && num != max)
        {
            secMax = num;
        }
        i++;
    }

    cout << secMax << endl;
    

return 0;
}