#include<iostream>
#include<conio.h>
using namespace std;
int area(int d)
   { 
      return d*d; 
   }
   int main()
   { int s;
   cout<<"enter the side of the square"<<endl;
   cin>>s;
   int a=area(s);
   cout<<"area of square"<<" "<<a;
   getch();
   }
