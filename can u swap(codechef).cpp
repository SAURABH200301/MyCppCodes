#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s,s1;
		cin>>s;
		s1=s;
		sort(s.begin(),s.end());
		int count=0;
		for(int i=0;i<s.length();i++){
			if(s1[i]!=s[i])
			  count++;
		}
		if(count>2)
		  cout<<"NO"<<endl;
		else
		  cout<<"YES"<<endl;
	}
	return 0;
}
