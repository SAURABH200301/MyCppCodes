#include<bits/stdc++.h>
#define ll long long
using namespace std;
void Solve(vector<ll> v1,vector<ll> v2){
	for(int i=v1.size()-1;i>=0;i--)
	{
		for(int  j=v2.size()-1;j>=0;j--){
			if(v2[j]>v1[i]){
				v2.insert(v2.begin()+j-1,v1[i]);
			}else{
				v2.insert(v2.begin()+j,v1[i]);
			}
		}
	}
	for(int i=0;i<v2.size();i++){
		cout<<v2[i]<<" ";
	}
}
int main(){
	
	int t;
	cin>>t;
	while(t--){
	   ll n,m;
	   cin>>n>>m;
	   vector<ll> v1,v2;
	   for(int i=0;i<n;i++)
	     {
	     	int a;
	     	cin>>a;
	     	v1.push_back(a);
		 }
		 for(int i=0;i<m;i++)
	     {
	     	int a;
	     	cin>>a;
	     	v2.push_back(a);
		 }
		 Solve(v1,v2);
	    
	}
	return 0;
}
