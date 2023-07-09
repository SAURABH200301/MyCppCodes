//program to count no. of lowercase term//
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
  {  
     int chcount=0;
       char ch;
         char chh='y';
           if(chh=='y')
           {
           	     cout<<"enter charater"<<endl;
           	     cin.get(ch);
           	     if(ch>='a'&&ch<='z')
           	     {  
           	     chcount++;
           	     cout.put(ch);
           	     cout<<endl;
           	     
					}
		     
		     cout<<"want to enter more character then press y "<<endl;
		     cin.get(chh);
	         }
			 
		   else
		   cout<<"the no. of charcter "<<chcount;
		   getch();
  
  }
