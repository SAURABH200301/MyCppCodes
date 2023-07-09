#include<bits/stdc++.h>
using namespace std;
int isSubstring(string s1,string s2){
	int size=0;
	int i=1,j=s1.size();
	bool noit=false;
	string str;
	while(i<j){
	    if(noit)
	      break;
//	    cout<<s1.substr(0,i)<<endl;
		auto s= s2.find(s1.substr(0,i));
		if(s!=string::npos){
		      size=i;
		      str=s1.substr(0,i);
		}
		else{
		    noit=true;
		}
		i++;
	}
	cout<<str<<endl;
	return size;
}
int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	cout<<isSubstring(s1,s2);
	return 0;
}
