#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s,s2; int count=0;
	cout<<"enter new email id"<<endl;
	getline(cin,s);
	cout<<s<<endl;
	int a=s.find('@');
	s2=s.substr(0,a);
	string::iterator t;
	for(t=s2.begin();t!=s2.end();t++)
	   if(*t=='_'||*t=='.'||(*t>=65&&*t<=90)||(*t>=97&&*t<=122))
	   count++;
	   else 
	   count=-100;
	   
	   if(count>0)
	   cout<<"valid";
	   else cout<<"not valid";
	   return 0;
	
	
}
