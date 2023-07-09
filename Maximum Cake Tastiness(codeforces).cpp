#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> v;
		for(ll i=0;i<n;i++){
			ll a;
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		cout<<v[v.size()-1]+v[v.size()-2]<<endl;
	}
	return 0;
}
