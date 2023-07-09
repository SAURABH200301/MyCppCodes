#include<iostream>   // this program is to show how we can define user define datatype i.e enum and typedef
#include<conio.h>    
using namespace std;
enum day {mon,tue,wed,thu,fri,sat,sun}; // this is how we define enum 
              // here we define mon to sun variable for enum and day as datatype
              //mon get value 0 tue 1 similary for all
 int main()
  {  
     day d; 
	 cout<<d<<endl;
	 d=tue;
	 cout<<d;
	 getch();
	 return 0; 
  }
