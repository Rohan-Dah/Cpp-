//Arrange numbers in the fashion 1 3 5 4 2 for n = 5  and 1 3 5 6 4 2 for n = 6
//                               0 1 2 3 4                0 1 2 3 4 5 
#include<iostream>
using namespace std;

void createArray(int arr[], int n)
{
    if(n%2 != 0)
    {
        cout << "Dealing with odd sized..." << endl;
        int val = 1;
        for(int i = 0; i<=(n/2); i++)
        {
            arr[i] = val;
            val = val + 2;
        }

        val = n-1;
        for(int i = ((n/2)+1); i < n; i++)
        {
            arr[i] = val;
            val = val - 2;
        }
          
    }
    if(n%2 == 0)
    {
        cout << "Dealing with even sized..." << endl;
        int val = 1;
        for(int i = 0; i<=(n/2)-1; i++)
        {
            arr[i] = val;
            val = val + 2;
        }

        val = n;
        for(int i = n/2; i<n; i++)
        {
            arr[i] = val;
            val = val - 2;
        }
    }

    else{
        cout << "invalid input..." << endl;
    }
}

void displayArray(int arr[], int n)
{
    cout << "Your array is: " << endl;
    for(int i = 0; i<n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int n;
    cout << "Enter size of the array: " << endl;
    cin >> n;
    int arr[100];
    createArray(arr, n);
    displayArray(arr, n);
    
return 0;
}

/* Alternate solution by TA
void arrange(int *arr, int n)
{
    //Write your code here
    int j=n-1;
    int i=0;
    int k=1;
    
  while(i<=j){
      if(i==j){
          arr[i]=k;
      }
      else{
      arr[i]=k++;
      arr[j]=k++;
      }
      i++;
      j--;
  }
    
}

*/