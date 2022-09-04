#include<iostream>
using namespace std;

void func(int a[])
{
    cout << "Starting location in func: " << a << endl;
    //This starting location will be copied from the main function
    cout << "Size of array in func: " << sizeof(a) << endl;
    //sizeof when used here will only return the value 8 as that is the number of bytes requred to store an address. And address is the only thing that we passed. To pass the size of array we must do it explicitely. 

}

int main()
{
    int size;
    cout << "Enter size of array: " <<endl;
    cin >> size;
    int array[size];
    cout << "Starting location in main: " << array << endl;
    cout << "Size of array in main: " << sizeof(array) << endl;
    // Now suppose you want to pass an array into a function
    func(array);


return 0;
}

  /*It must be noted that the indexing of the arrays start from 0. Now if we have declared an array suppose b[5]. b is the name of the array for sure but it also holds the address of first element in the array. Now we have indexes: 0 means the element is 0 distance away from the first element, 1 means the element is 1 distance away from first element and so on... That is the reason indexing starts from 0 in arrays..
    Now how will a system comprehend b[1] = 5; Hume 2nd box mein 5 store karna hai as indexing starts from 1.
    So the system will get this as 100 + 1 * 4.. Here 100 is the memory location of the first element (suppose), 1 is kitna door hai 1st position se and 4 is the total bytes required by the system to store an integer... Thats the process...

    Now if we do cout << array we will be printing out the memory location of teh starting block. Memory locations in the system are stored in hexadecimals and starts with 0x. 0x means everything following it is in hexadecimal
    */