#include<bits/stdc++.h>
#define ll long long
using namespace std;

//4
//4 4
//1 16 4 4
//6 2
//1 2 2 2 4 7
//5 3
//5 2 3 5 15
//9 10
//10 10 10 20 1 100 200 2000 3


int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,x,c=0;
		cin>>n>>x;
		vector<ll> v;
         unordered_map<ll,ll> m;
		for(ll i=0;i<n;i++){
			ll a;
			cin>>a;
			v.push_back(a);
			m[a]++;
		}	
		sort(v.begin(),v.end());
		for(ll i=0;i<n;i++){
			if(m.count(v[i])==0) continue;
			if(m.count(v[i]*x))
			  {
			     m[v[i]*x]--;
		      }
			else
			  c++;
			m[v[i]]--;
			if(m[v[i]*x]==0) m.erase(v[i]*x);
			if(m[v[i]]==0) m.erase(v[i]);
		}
		cout<<c<<endl;
	}
	return 0;
}
