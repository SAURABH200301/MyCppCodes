#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++)
		   cin>>a[i];
		sort(a,a+n);
		if(n==1 and a[0]!=1)
		  cout<<"NO"<<endl;
		else if(a[n-1]-a[n-2]>1)
		  cout<<"NO"<<endl;
		else
		  cout<<"YES"<<endl;
		
	}
	return 0;
}
