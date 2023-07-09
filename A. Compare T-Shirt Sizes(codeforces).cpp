#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int n=s1.length();
		int m=s2.length();
		if(s1[n-1]==s2[m-1] and s1[n-1]=='S'){
			if(n>m) cout<<"<"<<endl;
			else if(m>n) cout<<">"<<endl;
			else cout<<"="<<endl;
		}
		else if(s1[n-1]==s2[m-1]){
			if(n>m) cout<<">"<<endl;
			else if(m>n) cout<<"<"<<endl;
			else cout<<"="<<endl;
		}
		else if(s1[n-1]=='S' and (s2[m-1]=='M' or s2[m-1]=='L'))
			cout<<"<"<<endl;
		else if(s2[m-1]='S' and (s1[m-1]=='M' or s1[m-1]=='L'))
			cout<<">"<<endl;
		else if(s1[n-1]=='L' and s2[m-1]=='M')
		 	cout<<">"<<endl;
		else if(s1[n-1]=='M' and s2[m-1]=='L')
			cout<<"<"<<endl;
		else if(m>n) cout<<"<"<<endl;
		else cout<<">"<<endl;
		
	}
	
	return 0;
}
