#include<bits/stdc++.h>
using namespace std;
// ceabaacb
int minDeletions(string s){
	map<char,int> m;
	for(int i=0;i<s.length();i++){
		m[s[i]]++;
	}
	int count=0;
	map<char,int> :: iterator it,i;
	for(i=m.begin();i!=m.end();i++){
	    it =m.begin();
		for(;it!=m.end();it++){
			if(i->second==it->second and i->first!=it->first){
				it->second--;
				count++;
			}
		}
	}
	return count;
}
int main(){
	string s;
	cin>>s;
	cout<<minDeletions(s);
	
	return 0;
}
