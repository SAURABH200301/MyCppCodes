#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll k;
	cin>>k;
	while(k--)
	{
		ll d,l,r;
		cin>>d>>l>>r;
		if(d>=l&&d<=r)
		 cout<<"Take second dose now"<<endl;
		else if(d<l)
		 cout<<"Too Early"<<endl;
		else
		 cout<<"Too Late"<<endl;
	}
	return 0;
}
