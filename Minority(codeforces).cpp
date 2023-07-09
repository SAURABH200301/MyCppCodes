#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int num0=0,num1=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='0')
			  num0++;
			else
			  num1++; 
			
		}
		if(num0==num1)
		{
			cout<<num0-1<<endl;
		}
		else{
			cout<<min(num0,num1)<<endl;
		}
	}
	return 0;
}
