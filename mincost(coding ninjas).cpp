#include<bits/stdc++.h>
using namespace std;
int minCost(vector<vector<int>>& v,int i,int j){
	if(i>v.size() and  j>v[0].size())
	   return 0;
	if(i== v.size()-1 and j==v[0].size())
	   return v[i][j];
	if(i== v.size()-1 and j<v[0].size())
	  return v[i][j]+minCost(v,i,j+1);
	if(i<=v.size() and j==v[0].size())
	  return v[i][j]+minCost(v,i+1,j);
	
	int a= minCost(v,i+1,j);
	int b= minCost(v,i,j+1);
	int c= minCost(v,i+1,j+1);
	
	return min(a,min(b,c))+v[i][j];
}
int main(){
	int n,m;
	vector<vector<int>> v;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		vector<int> v1;
		for(int j=0;j<m;j++){
			int a;cin>>a;
			v1.push_back(a);
		}
		v.push_back(v1);
	}
	cout<<minCost(v,0,0);
	return 0;
}
