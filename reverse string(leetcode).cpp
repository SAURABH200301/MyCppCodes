#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="Let's take LeetCode contest";
	vector<string> v;
	string str="";
	reverse(s.begin(),s.end());

 int p=0,i;
  for( i=0;i<s.length();i++){
  	if(s[i]==' '){
  		v.push_back(s.substr(p,i-p));
  		p=i+1;
	  }
  }
  v.push_back(s.substr(p,i-p));
    for(i=v.size()-1;i>=0;i--){
    	if(i==0)
          str+=v[i];
        else
    	  str+=v[i]+' ';
	}
	if(str.length()==s.length())
	  cout<<"tr";
	cout<<str;
	return 0;
}
