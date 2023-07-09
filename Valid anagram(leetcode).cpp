#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s1,string s2){
	unordered_map<char, int> m1,m2;
	for(int i=0;i<s1.length();i++){
		char a= s1[i];
		m1[a]++;
	}
	for(int i=0;i<s2.length();i++){
		char a= s2[i];
		m2[a]++;
	}
	for( auto it: m1){
		if(m2.find(it.first)!=m2.end())
		{
			auto iti= m2.find(it.first);
			if((iti->second)!=(it.second))
			   return false;
		}else{
			return false;
		}
	}
	return true;
}
int main(){
	string s1,s2;
	cin>>s1;
	cin.ignore();
	cin>>s2;
	if(isAnagram(s1,s2))
	   cout<<"yes";
	else
	  cout<<"no";
	return 0;
}
