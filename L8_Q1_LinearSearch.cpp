//Find the elenents in the arrat using linear search and return the index.

#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int array[100];

    cout << "Enter the elements in array: " << endl; 
    for(int i = 0; i<size; i++)
    {
        cin >> array[i];
    }

    cout << "The elements are: " << endl;
    for(int i = 0; i<size; i++)
    {
        cout << array[i] << " ";
    }

    int x;
    int isPresent = 0;

    cout << "\nEnter the element you want to search: " << endl;
    cin >> x;

    for(int i = 0; i<size; i++)
    {
        if(array[i] == x)
        {
            cout << "Index of this element in array: " << i << endl;
            isPresent = 1;
        }
    }
    if(isPresent == 0)
    {
        cout << "Element not present... " << endl;
    }

return 0;
}