#include<iostream>
#include<process.h>
using namespace std;
int main()
{
	string s="We promptly judged antique ivory buckles for the prize";
	//cin>>s;
	int a[26]={0},sumi=0;
	//cout<<(int)s[52]-97<<endl;
	for(int i=0;i<s.length();i++)
	{
		
		if(s[i]>='A'&&s[i]<='Z')
		  {s[i]=s[i]+32;
		  }
		
		if(isalpha(s[i]))
		{a[(int)s[i]-97]++;
		sumi++;
		}
	}
	int sum=0;
	for(int i=0;i<26;i++)
	{
		sum+=a[i];
		cout<<a[i]<<" ";
		if(a[i]==0)
		 {
		 	cout<<"not a pangram"<<endl;
		 	return 0;
		 }
	}
	cout<<" sum"<<sum<<"sumi"<<sumi<<endl;
	cout<<"pangram"<<endl;
	return 0;
}
