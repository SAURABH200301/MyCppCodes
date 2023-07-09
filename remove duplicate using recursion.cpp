#include<iostream>
#include<string.h>
using namespace std;
int length(char s[])
{
	if(s[0]=='\0')
	{
		return 0;
	}
	int smallstr=length(s+1);
	 return 1+smallstr;
}
void fun(char s[])
{
    //cout<<"hey"<<endl;	
	if(s[0]=='\0')
	{
		return   ;
	}
	if(s[0]==s[1])
	{
		
		for(int i=0;i<length(s);i++)
		{
			s[i]=s[i+1];
		}
		//s.resize(l-1);
		fun(s);
	}
	else
	{
		fun(s+1);
	}
}
int main()
{
	char s[100];
	cin>>s;
	//int l=length(s);
     fun(s);
     cout<<s;
	return 0;
}
