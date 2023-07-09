#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
int main(){
	FAST
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		string s;
		cin>>s;
		ll count0=0,count1=0,count=0;
		
		for(ll i=0;i<n;i++){
			if(s[i]=='0'){
				count0++;
			}
			else
			   count1++;
		}
		if(s[0]=='1')
		  count++;
		if(s[n-1]=='1')
		  count++;
		  count1-=count;
		if(2*count0-2-count1<0)
		  cout<<"0"<<endl;
		else
		  cout<<2*count0-2-count1<<endl;
		
	}
	return 0;
}
