//Implimenting linear search using the test cases...

#include<iostream>
using namespace std;

void createArray(int array[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cin >> array[i];
    }
    cout << "Array Created..." << endl;
}

void displayArray(int array[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cout << array[i] << " ";
    }
}

void linearSearch(int array[], int size)
{
    int x;
    cout << "Enter the element to search: " << endl;
    cin >> x;
    int isPresent = 0;

    for(int i = 0; i<size; i++)
    {
        if(array[i] == x)
        {
            cout << "Element present at index: " << i;
            isPresent = 1;
        }
    }
    if(isPresent == 0)
    {
        cout << "Element not present..." << endl;
    }
}

int main()
{
    int size;
    cout << "Enter size of the array: " << endl;
    cin >> size;
    int array[100];
    createArray(array, size);

    cout << "1) Display" << endl;
    cout << "2) Linear Search" << endl;
    int choice;
    cin >> choice;

    if(choice == 1)
    {
        displayArray(array, size);
    }

    if(choice == 2)
    {
        linearSearch(array, size);
    }


    
return 0;
}