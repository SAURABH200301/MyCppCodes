#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int l;cin>>l;
		string s1,s2;
		cin>>s1;
		cin>>s2;
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		unordered_map<char,int> m1,m2;
		for(int i=0;i<l;i++){
			m1[s1[i]]++;
			m2[s2[i]]++;
		}
		int c=0;
		for(int i=1;i<l;i++){
			if(s1[i-1]!=s1[i] and !m2[s1[i-1]]){
				c+=m1[s1[i-1]];
			}
			else if(s1[i-1]!=s1[i] and m1[s1[i-1]]>m2[s1[i-1]]){
				c+=m1[s1[i-1]]-m2[s1[i-1]];
			}
		}
		cout<<c<<endl;
	}
	
	return 0;
}
