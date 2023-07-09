//this program is to show how refrence of any datatype can be made and use as the refrence name//

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
   {
   	   string s;
   	   cout<<"enter your name"<<endl;
   	   cin>>s;
   	   string &name=s;                    //here we use & operator to generate refrence of other data type as shown (datatype &newname=oldname;)
   	   cout<<"prinitng your name using the variable as defined"<<" "<<s<<endl;
   	   cout<<"pritning your name using reference as defined"<<" "<<name<<endl;
   	   cout<<"your name is store at the memory as below"<<" "<<&s;  //here we use & operator to know where the name is stored in the memory//
   	   getch();
   }

