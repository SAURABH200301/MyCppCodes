#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll k;
	cin>>k;
	while(k--)
	{
		ll n,a,b,c;
		cin>>n>>a>>b>>c;
		if(b>=n)
		{
			if((a+c)>=n)
			 cout<<"YES"<<endl;
			else
			 cout<<"NO"<<endl;
		}
		else
		 cout<<"NO"<<endl;
	}
	return 0;
}
