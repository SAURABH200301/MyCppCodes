#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    string s;cin>>s;
	    int ones=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1')ones++;
	    }
	    cout<<(ones*(ones+1))/2<<endl;
	}
}

