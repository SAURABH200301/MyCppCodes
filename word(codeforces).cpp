#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;int u=0,l=0;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(isupper(s[i]))
		  u++;
		else
		  l++;
	}
	if(u>l)
	  transform(s.begin(), s.end(), s.begin(), ::toupper);
	else
	  transform(s.begin(), s.end(), s.begin(), ::tolower);
	  
	cout<<s<<endl;	
	return 0;
}
