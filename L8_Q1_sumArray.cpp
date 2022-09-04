//Find the sum of all nmubers in array

#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of array: " <<endl;
    cin >> size;
    int array[size];

    cout << "Enter the elements: " << endl;
    for(int i = 0; i<size; i++)
    {
        cin >> array[i];
    }

    int sum = 0;
    for(int i = 0; i<size; i++)
    {
        sum = sum + array[i];
    }
    cout << "Sum is : " << sum << endl;

    /*It must be noted that the indexing of the arrays start from 0. Now if we have declared an array suppose b[5]. b is the name of the array for sure but it also holds the address of first element in the array. Now we have indexes: 0 means the element is 0 distance away from the first element, 1 means the element is 1 distance away from first element and so on... That is the reason indexing starts from 0 in arrays..
    Now how will a system comprehend b[1] = 5; Hume 2nd box mein 5 store karna hai as indexing starts from 1.
    So the system will get this as 100 + 1 * 4.. Here 100 is the memory location of the first element (suppose), 1 is kitna door hai 1st position se and 4 is the total bytes required by the system to store an integer... Thats the process...
    */
 
    return 0;
}