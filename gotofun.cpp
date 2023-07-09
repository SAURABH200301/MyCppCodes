// C++ program to print numbers
// from 1 to 10 using goto statement
#include <iostream>
using namespace std;
// function to print numbers from 1 to 10
void printNumbers()
{
    int n = 1;
label:                          //this is the label where when goto fun calls returns here
    cout << n << " ";
    n++;
    if (n <= 10)
        goto label;                  //calling of goto fun
}
// Driver program to test above function
int main()
{
    printNumbers();
    return 0;
}
