#include<iostream>
#include<string.h>           //this function use to show how iterator works
using namespace std;
int main()
{
	 string s="hello its me";
	 string::iterator t;              //forward iterator
	 t=s.begin();
	 
	 for(t;t!=s.end();t++)
	 cout<<*t;
	 cout<<endl;
	 string::reverse_iterator i;
	 for(i=s.rbegin();i!=s.rend();i++)
	 cout<<*i;
	 return 0;
	 	 
}
