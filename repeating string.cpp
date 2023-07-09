#include<bits/stdc++.h>
 #define ll long long
using namespace std;
int main()
{
	string s;char a='a';
	cin>>s;
	ll n;cin>>n;
	ll count_letter=count(s.begin(),s.end(),a);
	ll c=(n/s.length());
	ll m=(n-(c*s.length()));
	c=(n/s.length())*count_letter;
//	cout<<count_letter<<" "<<c<<" "<<m<<endl;
	for(int i=0;i<m;i++)
	{
		if(s[i]=='a')
		  c++;
	}
	cout<<c;
	return 0;
}
