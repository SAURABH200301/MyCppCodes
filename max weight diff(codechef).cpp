#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,d;
		cin>>n>>d;
		ll a[n];
		ll sum=0,sumM=0;
		for(ll i=0;i<n;i++)
		  {
		  	cin>>a[i];
		  	sum+=a[i];
		  }
		sort(a,a+n);
		ll Max=INT_MAX;
		int num=d;
		if(d>(n-d))
		  num=n-d;
		for(ll i=0;i<num;i++){
			sum-=a[i];
			sumM+=a[i];
			if(Max>sum-sumM)
			  Max=sum-sumM;
		}
		cout<<Max<<endl;
	}
	return 0;
}
