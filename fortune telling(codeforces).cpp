#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,x,y,xorSum=0;
		cin>>n>>x>>y;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			xorSum^=arr[i];
		}
		if((x^xorSum)%2==y%2)
		 cout<<"Alice"<<endl;
		else
		 cout<<"Bob"<<endl;
	}
	return 0;
}
