#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   
   int x=10;
   int& ref =x;                //refrence and real value is same 
   ref=20;                     //if we change any value ref or x there will bw change in both because both are pointing towards same variable
   cout<<"x="<<x<<endl;
   x=30;  
   cout<<"ref="<<ref<<endl;
   ref=10;
   cout<<"ref="<<ref<<endl;
   cout<<"x="<<x<<endl;
   return 0;
   getch();
}
