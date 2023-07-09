#include<iostream>
using namespace std;
int main()
{
	string s,str;
	cin>>s;
	int n=s.length();
	for(int i=0,j=n-1;i<=n;i++,j--)
	{
		if(s[i]!=s[j])
		{
			cout<<j+1<<endl;
			return 0;
		}
	}
	return 0;
}
