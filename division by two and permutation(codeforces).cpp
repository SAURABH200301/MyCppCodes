#include<bits/stdc++.h>
#define ll long long
const int N=1000005;
using namespace std;
 
void solve(){
	ll n;cin>>n;vector<ll>cnt(n+1);
	for(int i=1;i<=n;i++){
		ll x;cin>>x;
		while(x>n)x/=2;cnt[x]++;
	}
	ll fl=1;
	for(int i=n;i;i--){
		if(!cnt[i])fl=0;
		cnt[i]--;
		cnt[i/2]+=cnt[i];
	}
	cout<<(fl?"YES":"NO")<<endl;
}
 
int main(){
	int _T=1;cin>>_T;
	while(_T--)solve();
}
