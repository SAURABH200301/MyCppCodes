#include<bits/stdc++.h>
using namespace std;
// 6
// abcabdc
// a
// bbbbbbbbbb
// codeforces
// cffcfccffccfcffcfccfcffccffcfccf
// zyzyzwxxyyxxyyzzyzzxxwzxwywxwzxxyzzw
int main(){
	int t;
	cin>>t;
	while(t--){
	   string s;
	   unordered_map<char,int> m;
	   cin>>s;
	   for(int i=0;i<s.length();i++){
	   	  m[s[i]]++;
	   	  
	   }
	   if(m.size()==1){
	       cout<<s[0]<<endl;
	   }
	   else{
	       string str="";
	   for(int i=0;i<s.length();i++){
	   	  
	   	  if(m[s[i]]>1){
	   	  	str= s.substr(i,s.length());
	   	  	m[s[i]]--;
		  }
		  else{
		      str= s.substr(i,s.length());
		  	cout<<str<<endl;
		  	break;
		  }
	   }
	   }
	}
	return 0;
}
