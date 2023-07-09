#include<bits/stdc++.h>
using namespace std;
int flip(string s,string &str,int m,int n){
    // cout<<s<<" "<<str<<endl;
	if(s==str) return 1;
	else{
		int l=str.length();
// 		cout<<str.substr(l-m)<<" "<<str.substr(0,l-m)<<endl;
		str=str.substr(l-m)+str.substr(0,l-m);
		if(s==str) return 1;
		
		str=str.substr(l-n-1)+str.substr(0,l-n-1);
		
		
//		count++;
		return 1+flip(s,str,m,n);
	}
}
int solve(string input1,int input2,int input3){
	string str="";
	int l=input1.length();
		str=input1.substr(l-input2)+input1.substr(0,l-input2);
// 		cout<<str<<endl;
    str=input1.substr(l-input3-1)+input1.substr(0,l-input3-1);
    // 	cout<<str<<endl;
	return 1+flip(input1,str,input2,input3);
}
int main(){
	string s;
	cin>>s;
	int m,n;
	cin>>m>>n;
	int ans= solve(s,m,n);
	cout<<ans;
	return 0;
}
