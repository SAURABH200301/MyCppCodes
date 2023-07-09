#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> v;
		for(int i=0;i<n;i++)
		   {
		   	ll a;cin>>a;
		   	if(v.empty())
		   	  v.push_back(a);
		   	else{
		   		if(v[v.size()-1]!=a){
		   			v.push_back(a);
				   }
			   }
		   }
		   sort(v.begin(),v.end());
		   int c=0;
		   for(int i=1;i<v.size();i++){
		   	  c+=v[i]-v[i-1];
		   }
		   cout<<c<<endl;
		   
	}
	return 0;
}
