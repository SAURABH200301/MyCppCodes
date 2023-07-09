#include<iostream>
using namespace std;
int main()
{
   int *ptr = NULL;         //null is stored in pointer 
   int &ref = *ptr;         // now pointer is stored in refernce 
   cout << ref;
}
