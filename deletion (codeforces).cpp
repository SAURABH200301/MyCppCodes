#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	char a;
	int T;cin>>T;
	while(T--){
		cin>>s>>a;
		int f=0;
		for(int i=0;i<s.size();i++){
			if(s[i]==a&&i%2==0) f=1;
		}
		if(f==1) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
