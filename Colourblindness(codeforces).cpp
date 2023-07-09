#include<bits/stdc++.h>
using namespace std;
void solve(string s1,string s2,int n){
//	string ans="YES";
	for(int i=0;i<n;i++){
		if((s1[i]=='R' and s2[i]=='G') or (s1[i]=='G' and s2[i]=='R') or (s1[i]=='R' and s2[i]=='B') or (s1[i]=='B' and s2[i]=='R')){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
	return;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s1,s2;
		cin>>s1;
		cin.ignore();
		cin>>s2;
		solve(s1,s2,n);
	}
	return 0;
}
