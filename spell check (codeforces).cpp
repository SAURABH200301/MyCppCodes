#include<bits/stdc++.h>
using namespace std;
void solve(string s,int n){
	string str= "Timur";
	sort(str.begin(),str.end());
	sort(s.begin(),s.end());
	if(s==str) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		solve(s,n);
	}
	return 0;
}
