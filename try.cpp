#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define w()       ll t;cin>>t;while(t--)

int main()
{
	w(){
		ll n,max1=-1000,max2=-10000;
		cin>>n;
		vector<ll> v1,v2;
		for(int i=0;i<n;i++){
			ll a;cin>>a;
			if(max1<a)
			  max1=a;
			v1.push_back(a);
		}
		for(int i=0;i<n;i++){
			ll a;cin>>a;
			if(max2<a)
			  max2=a;
			v2.push_back(a);
		}
 	
		auto it= find(v2.begin(),v2.end(),max2);
		ll ind = v2.size()-(v2.end()-it);
		while(v1[ind]<v2[ind]){
			int c=v1[ind];
			v1[ind]=v2[ind];
			v2[ind]=c;
			max2 = *max_element(v2.begin(), v2.end());
			auto it= find(v2.begin(),v2.end(),max2);
			ind = v2.size()-(v2.end()-it);
		}
		cout<<(*max_element(v2.begin(), v2.end()))*(*max_element(v1.begin(), v1.end()))<<endl;
	}
	return 0;
}
