#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		bool one=false,two=false,three=false;
		if(s[0]=='y' or s[0]=='Y') one=true;
		if(s[1]=='e' or s[1]=='E') two=true;
		if(s[2]=='s' or s[2]=='S') three =true;
		
		if(one and two and three) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
