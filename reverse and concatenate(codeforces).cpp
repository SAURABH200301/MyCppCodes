#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isPalin(string s){
	ll n=s.length();
	for(int i=0;i<n/2;i++)
	{
		if(s[i]!=s[n-i-1])
		 return false;
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k==0)cout<<"1\n";
    else if(isPalin(s))
     cout<<"1\n";
    else cout<<"2\n";
    }
	return 0;
}
