#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
	int t;cin>>t;
	for(int i=0;i<t;i++){
		int n;cin>>n;string s[n];
		map<string,int> mp;
		for(int j=0;j<n;j++){
			cin>>s[j];mp[s[j]]++;
		}
		string ans;
		for(int i=0;i<n;i++) ans.push_back('0');
		for(int j=0;j<n;j++){
			int m=s[j].length();
			for(int k=0;k<m-1;k++){
				if(mp[s[j].substr(0,k+1)]&&mp[s[j].substr(k+1)]) ans[j]='1';
			}
		}
		cout<<ans<<endl;
	}
}
