#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
  {
  	 
  	 char str1[80],str2[80];
  	 int x,y,z;
  	 cout<<"enter first string "<<endl;
  	 cin.getline(str1,80);
  	 cout<<"enter the second string"<<endl;
  	 cin.getline(str2,80);
  	 x=strlen(str1);
  	 y=strlen(str2);
  	 strcat(str1,str2);
  	 z=strlen(str1);
  	 cout.write(str1,z);
  	 cout<<endl;
  	 cout<<"your second final string contain "<<z<<" no. of character"<<endl;
  	 
  	 getch();
  }
