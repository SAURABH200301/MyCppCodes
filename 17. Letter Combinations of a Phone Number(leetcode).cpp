#include<bits/stdc++.h>
using namespace std;
vector<string> rec(string &D,int i,map<int,string> &m){
	if(i==D.size()) return {""};
	vector<string> temp = rec(D,i+1,m);
	vector<string> ans;
	for(auto a:m[D[i]-'0']){
		for(auto x: temp){
			ans.push_back(a+x);
		}
	}
	return ans;
}
vector<string> letterCombinations(string s){
	map<int ,string> m;
	m[2]="abc";
	m[3]="def";
	m[4]="ghi";
	m[5]="jkl";
	m[6]="mno";
	m[7]="pqrs";
	m[8]="tuv";
	m[9]="wxyz";
	return rec(D,0,m);
}
int main(){
	string s;
	cin>>s;
	vector<string> str =letterCombinations(s);
	for(int i=0;i<str.length();i++)
	  cout<<str[i]<<" ";
	  
	return 0;
}
