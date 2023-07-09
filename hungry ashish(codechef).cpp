#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;

	while(t--)
	{
		bool heEated= true;
		ll x,y,z;
		cin>>x>>y>>z;
		if(y<=x)
		{
			cout<<"PIZZA"<<endl;
			x-=y;
			heEated=false;
		}
		else if(z<=x)
		{
			cout<<"BURGER"<<endl;
			x-=z;
			heEated=false;
		}
		if(heEated)
		  cout<<"NOTHING"<<endl;
	}
	return 0;
}
