#include<bits/stdc++.h>
using namespace std;
int firstUniqChar(string s){
	unordered_map<char,int> m;
	for(int i=0;i<s.length();i++){
		m[s[i]]++;
	}
	for(int i=0;i<s.length();i++){
	    char a =s[i];
		auto it= m.find(a);
		 if(it->second==1)
		   return i;
	}
	return -1;
}
int main(){
	string s;
	cin>>s;
	 int a = firstUniqChar(s);
	 cout<<a;
	return 0;
}
