#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a;
		cin.ignore();
		cin>>b;
		if(a.length()!=b.length())
		  cout<<"No"<<endl;
		else{
			string A=a;
			string B=b;
			reverse(A.begin(),A.end());
			string RA= A.substr(1,A.length());
			string BB= B.substr(1,B.length());
			reverse(A.begin(),A.end());
			string AA= A.substr(1,A.length());
			reverse(B.begin(),B.end());
			string RB= B.substr(1,B.length());
			if(a.substr(1,a.length())==b.substr(1,b.length()) or RA==BB or AA== RB)
			  cout<<"Yes"<<endl;
			else 
			  cout<<"No"<<endl;
		}
	}
	return 0;
}
