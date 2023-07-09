#include<iostream>
#include<string.h>
using namespace std;
lapindrome(string s,int n)
{
	int count=0,j;
	
	for(int i=0;i<n/2;i++)
	{
		if(n%2==0)
	j=n/2;
	else
	j=n/2+1;
		for(;j<n;j++)
		{
			if(s[i]==s[j])
			count++;
		}
	}
	if(count==n/2)
	cout<<"YES"<<endl;
	else 
	cout<<"NO"<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		string s;
		cin>>s;
		lapindrome(s,s.length());
		t--;
	}
	return 0;
}
