//Far to Cel table using function

#include<iostream>
using namespace std;

void printTable(int start, int final, int stepSize)
{
    while(start <= final)
    {
        int cel = (5.0/9) * (start - 32);
        cout << start << " " << cel << endl;
        start = start + stepSize;
    }
}

int main()
{
    int start, final, stepSize;
    cin >> start >> final >> stepSize;

    printTable(start, final, stepSize);

return 0;
}