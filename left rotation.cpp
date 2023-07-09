#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	ll n,d,k=0;
	cin>>n>>d;
    ll v[n];
    ll j=n-d;
    for(ll i=j;i<n;i++)
    {
    	cin>>v[i];k++;
	}
	ll i=0;
	while(k!=n)
	{
		cin>>v[i];
		i++;k++;
	}
	for(ll o=0;o<n;o++)
	{
		cout<<v[o]<<" ";
	}
	
	return 0;
}
