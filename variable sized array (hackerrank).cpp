#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	vector<vector<int>> v;
	for(int i=0;i<n;i++){
		int m;cin>>m;
		vector<int> vec;
		for(int j=0;j<m;j++){
			int a;cin>>a;
			vec.push_back(a);
		}
		v.push_back(vec);
	}
    while(q--){
    	int i,j;
    	cin>>i>>j;
    	cout<<v[i][j]<<endl;
	}
	return 0;
}
