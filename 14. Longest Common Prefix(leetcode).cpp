#include<bits/stdc++.h>
using namespace std;
// ["flower","flow","flight"]
string prefixes(string s1,string s2){
	int i=1,j=s1.size();
	bool noit=false;
	string str;
	while(i<=j){
	    if(noit)
	      break;
	   // cout<<s1.substr(0,i)<<endl;
		auto s= s2.find(s1.substr(0,i));
		if(s!=string::npos){
		      str=s1.substr(0,i);
		}
		else{
		    noit=true;
		}
		i++;
	}
// 	cout<<str;
	return str;
}
string longestCommonPrefix(vector<string> v){
	string s;
	s=prefixes(v[0],v[1]);
	for(int i=2;i<v.size();i++){
		s=prefixes(s,v[i]);
	}
	return s;
}
int main(){
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		v.push_back(s);
	}
	cout<<longestCommonPrefix(v);
	return 0;
}
