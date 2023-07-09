#include<bits/stdc++.h>
using namespace std;
int uniquePath(vector<vector<int>> v,vector<vector<int>> vec,int i,int j){
	if(i<0 or j<0 or i>v.size() or j> v[0].size()) return 0;
	if(v[i][j]==1) return 0;
	if(i==v.size() and j==v[0].size()) return 1;
	if(vec[i][j]!=-1) return vec[i][j];
	int a = 1+uniquePath(v,vec,i+1,j);
	int b = 1+uniquePath(v,vec,i,j+1);
	vec[i][j]=max(a,b);
	return vec[i][j];
}
int uniquePathsWithObstacles(vector<vector<int>> v){
	vector<vector<int>> vec;
	for(int i=0;i<v.size();i++){
	    vector<int> vv;
		for(int j=0;j<v[i].size();j++)
		   vv.push_back(-1);
		vec.push_back(vv);
	}
	int ans =uniquePath(v,vec,0,0);
	return ans;
}
int main(){
	int n;
	cin>>n;
	vector<vector<int>> vec;
	for(int i=0;i<n;i++){
		vector<int> v;
		for(int j=0;j<n;j++){
			int a;cin>>a;
			v.push_back(a);
		}
		vec.push_back(v);
	}
	cout<<uniquePathsWithObstacles(vec);
	return 0;
}
