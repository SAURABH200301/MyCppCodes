#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
int main(){
	FAST
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int ans=-1;
		map<int,int> m;
		for(int i=0;i<n;i++){
			if(m.count(a[i]))
			  ans=max(ans,m[a[i]]+n-i);
			m[a[i]]=i;
		}
		cout<<ans<<endl;
	}
	return 0;
}
