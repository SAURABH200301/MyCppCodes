#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   string s;
	   cin>>s;
	   map<char,int> m;
	   for(int i=0;i<n;i++){
	   	 m[s[i]]++;
	   }
	   if(s.size()==m.size()){
	   	  cout<<2*s.size()<<endl;
	   }
	   else{
	   	cout<<2*m.size()+(s.size()-m.size())<<endl;
	   }
	}
	return 0;
}
