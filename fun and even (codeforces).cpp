#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++)
		  cin>>arr[i];
		ll l=1,k=1;
		for(int i=0;i<n;i++)
		{
			if(l<=l+(2*k)-1){
				arr[l+i]=arr[l+k+1];
			}
			l++;k++;
			
		}

	}
	return 0;
}
