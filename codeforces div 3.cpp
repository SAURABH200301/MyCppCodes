#include<iostream>
#include<string.h>
using namespace std;
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		string s,s1;int sum=0;
		cin>>s>>s1;
		for(int i=0;i<s1.length()-1;i++)
		{
			if(s.find(s1[i])>s.find(s1[i+1]))
			 sum+=(s.find(s1[i])-s.find(s1[i+1]));
			else
			 sum+=(s.find(s1[i+1])-s.find(s1[i]));

		}
		cout<<sum<<endl;
	}
	return 0;
}
