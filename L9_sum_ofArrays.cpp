// Find sum of arrays by carry.
//     6 2 4
//     5 7 6

#include <iostream>
using namespace std;

void createArray(int arr[], int size)
{
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int size)
{
    // cout << "Your elements are: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void sumOfTwoArrays(int arr1[], int arr2[], int size1, int size2, int output[])
{
    int size3;
    if (size1 > size2)
    {
        size3 = size1;
    }
    else
    {
        size3 = size2;
    }

    int carry = 0;
    int i = size1 - 1;
    int j = size2 - 1;
    int k = size3 - 1;
    int carry = 0, num;

    while (k >= 0)
    {
        num = carry;

        if (arr1[i] >= 0)
        {
            num += arr1[i];
        }
        if (arr2[j] >= 0)
        {
            num += arr2[j];
        }

        carry = num / 10;
        int data = num % 10;
        output[k] = data;
        i--;
        j--;
        k--;
    }
    if(carry != 0)
    {
        cout << carry << " ";
    }
}

int main()
{
    cout << "Enter the size of arrays: " << endl;
    int size1, size2;
    cin >> size1 >> size2;

    int arr1[100], arr2[100], output[size1 + size2];

    cout << "\nArray 1: " << endl;
    createArray(arr1, size1);
    displayArray(arr1, size1);

    cout << "\nArray 2: " << endl;
    createArray(arr2, size2);
    displayArray(arr2, size2);

    cout << "\nYour sum of arrays: " << endl;
    sumOfTwoArrays(arr1, arr2, size1, size2, output);
    displayArray(output, size1 + 1);

    return 0;
}
/*
void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
 {
 	int i = size1 - 1;
 	int j = size2 - 1;
 	int carry = 0;
 	int k = max(size1, size2);  
     
     // running the loop on i and j if any of two arrys finishes we will come out of loop
 	while (i >= 0 && j >= 0)
 	{
 		int sum = input1[i] + input2[j] + carry;
 		output[k] = sum % 10;
 		carry = sum / 10;
 		i--;
 		k--;
 	}

     
     // below while loop will execute if any of input1 or input2 have some elment left and other have elements completed
 	while (i >= 0)
 	{
 		int sum = input1[i] + carry;
 		output[k] = sum % 10;
  
		carry = sum / 10;
		 i--;
		 k--;
	 }
	 while (j >= 0)
	 {
	 	int sum = input2[j] + carry;
	 	output[k] = sum % 10;
	 	carry = sum / 10;
	 	j--;
	 	k--;
	 }
     
     // if we ahve some value in carry left then insert it in 0th index otherwise it will have 0 
 	output[0] = carry;
}*/