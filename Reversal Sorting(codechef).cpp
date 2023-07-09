#include<bits/stdc++.h>
using namespace std;

// 3
// 4 1
// 1 2 3 4
// 4 1
// 2 1 3 4
// 5 7
// 3 2 2 3 3
 bool solve(vector<int> v,int s){
 	bool ans=true;
 	for(int i=0;i<v.size()-1;i++){
 		if(v[i]>v[i+1]){
 			if(v[i]+v[i+1]<=s)
 			  swap(v[i],v[i+1]);
 			else{
 				ans=false;
 				break;
			 }
		 }
	 }
	 return ans;
 }
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s;
		cin>>n>>s;
		vector<int> v;
		for(int i=0;i<n;i++){
			int a;cin>>a;
			v.push_back(a);
		}
		if(solve(v,s))
		  cout<<"YES"<<endl;
		else
		  cout<<"NO"<<endl;
	}
	return 0;
}	
