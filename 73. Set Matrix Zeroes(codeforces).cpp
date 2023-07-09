#include<bits/stdc++.h>
using namespace std;
void setToZero(vector<vector<int>>& v,vector<vector<int>>& vec,int i,int j){
	for(int k=0;k<v.size();k++){
		vec[k][j]=0;
	}
    for(int k=0;k<vec[0].size();k++){
        vec[i][k]=0;
    }
}
void setZeroes(vector<vector<int>>& v){
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[0].size();j++){
			if(v[i][j]==0){
				setToZero(v,vec,i,j);
			}
		}
	}
	v=vec;
}
int main(){
	int n,m;cin>>n>>m;
	vector<vector<int>> v;
	for(int i=0;i<n;i++){
		vector<int> vec;
		for(int j=0;j<m;j++){
			int a;cin>>a;
			vec.push_back(a);
		}
		v.push_back(vec);
	}
	setZeroes(v);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
