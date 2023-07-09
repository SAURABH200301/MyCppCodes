#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,m,maxy=INT_MIN;
		cin>>n>>m;
		while(n--){
			ll minn=INT_MAX,maxx=INT_MIN;
			for(int i=0;i<m;i++){
				ll a;
				cin>>a;
				minn=min(minn,a);
				maxx=max(maxx,a);
			}
			ll num= maxx-minn;
			maxy=max(maxy,num);
		}
		cout<<maxy<<endl;
	}
	return 0;
}
