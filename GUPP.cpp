#include<bits/stdc++.h>
#include<stack>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t>0)
	{
		ll n;
		cin>>n;
		vector<ll> arr;
		for(ll i=0;i<n;i++)
		 {
		 	ll ele;cin>>ele;
		 	arr.push_back(ele);
		 }
		ll maxx=*max_element(arr.begin(), arr.end());
		for(ll i=0;i<n-2;i+=2)
		{
			if(maxx<(arr[i]+arr[i+2]))
			  maxx=arr[i]+arr[i+2];
		}
		for(ll i=1;i<n-2;i+=2)
		{
			if(maxx<(arr[i]+arr[i+2]))
			  maxx=arr[i]+arr[i+2];
		}
		cout<<maxx<<endl;
		t--;
	}
     return 0;
}
