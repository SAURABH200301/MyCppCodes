#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s,s1;
	cin>>s;
	cin>>s1;
	cout<<s.length()<<" "<<s1.length()<<endl;
	cout<<s+s1<<endl;
	char w=s[0];
	s[0]=s1[0];
	s1[0]=w;
	cout<<s<<" "<<s1;
	return 0;
}
