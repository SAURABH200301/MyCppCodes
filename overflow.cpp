#include<iostream>    //this program is to show what is overflow 
#include<conio.h>     //here we assign char as numberic value as 127 as we know that char value is from -128 to 127
using namespace std;
int main()
{ 
  char x =127;
  cout <<(int)x<<endl;// here when we print value of x in int using type casting we get 127 
  x++;                 // here we when inc it by 1 
  cout<<(int)x;        // we get -128 because max value of char is 127 after inc we get lowest i.e -128 
  getch();             //this is called overflow
  return 0;
}
