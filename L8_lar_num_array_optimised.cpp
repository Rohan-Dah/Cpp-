//Find the largest element in the array in an optimised version...

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int array[100], n;
    cout << "Enter the total number of elements in array: " << endl;
    cin >> n;

    cout << "Enter elements: " << endl;
    for(int i = 0; i<n; i++)
    {
        cin >> array[i];
    }
    cout <<"These are your elements: " << endl;
    for(int i = 0; i<n; i++)
    {
        cout << array[i] << " ";
    }

    int max = INT_MIN;
    for(int i = 1; i<n; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    cout << "\nMax element: " << max << endl;

return 0;
}