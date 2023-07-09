#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,sumE=0,sumO=0;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++)
		  cin>>arr[i];

		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			  sumE+=arr[i];
			else
			  sumO+=arr[i];

		}
		cout<<max(sumE,sumO)<<endl;
	}
	return 0;
}
