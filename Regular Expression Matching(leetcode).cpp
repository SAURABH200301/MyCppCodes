#include<bits/stdc++.h>
using namespace std;
bool dfs(int i,int j,string s,string p){
	if(i>=s.length() and j>= p.length())
	   return true;
	else
	   return false;
	   
	bool match = true;
    match= i< s.length() and (s[i]==p[i] or p[i]=='.');
    
    if((j+1)<p.length() and p[j+1]=='*')
    	 return (dfs(i,j+2,s,p)) or(match and dfs(i+1,j,s,p));
	
	if(match)
	  return dfs(i+1,j+1,s,p);
	
	return false;
}
bool isMatch(string s, string p) {
    return dfs(0,0,s,p);
}
int main(){
	string s,p;
	cin>>s>>p;
	cout<<isMatch(s,p);
}
