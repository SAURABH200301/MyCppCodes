#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s.length()%2!=0)
		   cout<<0<<endl;
		else{
			string str="";
			for(int i=0;i<s.length();i++){
				if(str.empty() or s[i]=='{' or s[i]=='[' or s[i]=='(')
				  str.push_back(s[i]);
				else if((str.back()=='{' and s[i]=='}') or (str.back()=='(' and s[i]==')') or(str.back()=='[' and s[i]==']') )
				   str.pop_back();
			}
			if(str.length()!=0)
			  cout<<"0"<<endl;
			else
			  cout<<"1"<<endl;
	    }

		}

	return 0;
}
