#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		vector<ll> v1,v2,vCopy;
		for(int i=0;i<n;i++)
		{
			ll a;cin>>a;
			v1.push_back(a);
			vCopy.push_back(a);
		}
		for(int i=0;i<n;i++)
		{
			ll a;cin>>a;
			v2.push_back(a);
		}
		sort(vCopy.begin(),vCopy.end());
		for(int i=0;i<n;i++)
		{
			if(vCopy[i]<=k)
			{
				auto it=find(v1.begin(),v2.end(),vCopy[i]);
				int index=it-v1.begin();
				k+=v2[index];
			}
		}
		cout<<k<<endl;
		k=0;
	}
	return 0;
}
