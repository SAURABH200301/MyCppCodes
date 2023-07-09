#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;int count=0;
	cout<<"enter the string"<<endl;
	cin>>s;
	string::iterator t;
	string::reverse_iterator i;
	for(t=s.begin(),i=s.rbegin();t!=s.end();t++,i++)
	    if(*t!=*i)
	    count++;
	    else 
	    count--;
	if(count>0)
	cout<<"not palindrome";
	else 
	cout<<"palindrome";
	    
	return 0;    
}
