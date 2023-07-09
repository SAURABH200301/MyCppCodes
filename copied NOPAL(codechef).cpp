#include <bits/stdc++.h>
#define ll      long long
#define pb(x)      push_back(x)
#define f(i,n)     for(ll i=0;i<n;i++)
#define w(t)       ll t;cin>>t;while(t--)
#define all(a)     (a).begin(), (a).end()
#define ss         second
#define ff         first
#define mod        100000000
using namespace std;
void solve(){
    ll n;cin>>n;
	string b;
	f(i,n){
		b+=char((i%26)+'a');
	}
	cout<<b<<endl;
	cout<<b<<endl;
}
int main(){
     w(t){
		 cout<<fixed<<setprecision(6);
      solve();
   }
}

