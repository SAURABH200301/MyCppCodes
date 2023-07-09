#include<bits/stdc++.h>
using namespace std;
int binary_not(string s){
	string str="";
	for(int i=0;i<s.length();i++){
		if(s[i]=='0') str+='1';
		else str+='0';
	}
	return stoi(str, nullptr, 2);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int m;cin>>m;
		string s;
		cin>>s;//getting the number in binary string
		int n=stoi(s, nullptr, 2);//conerting the binary to int
		int inv_num =binary_not(s);//getting the invert of the number 
		if(inv_num==0){
			cout<<ceil(log2(n))<<endl;
		}else{
 			int y=ceil(log2(n/inv_num));
			if(n^(n/pow(2,y))>n) cout<<"first" <<y<<endl;
			else if(n^(n/pow(2,y-1))>n) cout<<"second "<<y-1<<endl;
			else cout<<"third "<<y+1<<endl;
		}
		
	}
	return 0;
}
