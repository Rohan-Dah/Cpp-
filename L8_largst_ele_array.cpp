//Finding the largest element in array.

#include<iostream>
using namespace std;

int main()
{
    int array[100], n;
    cout << "Enter the number of elements you want to insert in array: " << endl;
    cin >> n;
    cout << "Enter your elements: " <<endl;
    for(int i = 0; i<n; i++)
    {
        cin >> array[i];
    }
    cout << "Your elements are: " << endl;
    for(int i = 0; i<n; i++)
    {
        cout << array[i] << " ";
    }

    int max = array[0];
    for(int i = 1; i<n ; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
        continue;
    }
    cout << "\nMax element: " << max << endl;
return 0;
}