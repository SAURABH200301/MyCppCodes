#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> fun(vector<vector<int>> v,int n,int m,int r,int c ){
	vector<vector<int>> mat;
	int k=0;
	int n = v.size(); int m= v[0].size();
	if(r*c!=n*m) return v;
	for(int i=0;i<r;i++){
		vector<int> row;
		for(int j=0;j<c;j++,k++){
			int a= v[k/m][k%m];
			row.push_back(a);
		}
		mat.push_back(row);
	}	
	return mat;
}
int main(){
	int m,n;
	cin>>m>>n;
	vector<vector<int>> v;
	for(int i=0;i<n;i++){
		vector<int> row;
		for(int j=0;j<m;j++){
			int a;cin>>a;
			row.push_back(a);
		}
		v.push_back(row);
	}
	int r,c;
	cin>>r>>c;
	vector<vector<int>> mat = fun(v,n,m,r,c);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
