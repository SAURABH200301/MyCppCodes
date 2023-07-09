#include<bits/stdc++.h>
using namespace std;

//WILL SEE LATER
int minFalling(vector<vector<int>> ve,int i,int j){
	if(i<0 or j>ve.size() or j<0 or i>ve.size()) return 0;
	int  num=v[i][j]+ min(minFalling(ve,i+1,j-1),min(minFalling(ve,i+1,j),minFalling(ve,i+1,j+1)));
	return num;
}
int minFallingPathSum(vector<vector<int>> v){
	if(v.size()==0) return 0;
	int mini=IMT_MAX;
	for(int i=0;i<v[0].size();i++){
		mini=min(mini,minFalling(v,0,i));
	}
	return mini;
}
int main(){
	int n;
	vector<vector<int>> v;
	for(int i=0;i<n;i++){
		vector<int> ve;
		for(int j=0;j<n;j++){
			int a;cin>>a;
			ve.push_back(a);
		}
		v.push_back(ve);
	}
	cout<<minFallingPathSum(v);
	return 0;
}
