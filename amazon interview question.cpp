#include<bits/stdc++.h>
using namespace std;
// 1
// 4
// 3 
// 1 2 3 2 
// 2 1 3 
// 1 2 4
// 2 1 4


int find_num_odd(vector<int> v,int i,int j){
	map<int,int> m;
	for(int k=i;k<j;k++){
		m[v[k]]++;
	}
	int n=0;
	for(auto k: m){
		if(k.second%2!=0)
		   n++;
	}
	return n;
}
vector<int> solve (int N, int Q, vector<int> Arr, vector<vector<int> > queries){
	vector<int> v;
	for(int i=0;i<Q;i++){
		if(queries[i][0]==1){
			Arr[queries[i][1]-1]=queries[i][2];
//			for(int i=0;i<Arr.size();i++)
//			  cout<<Arr[i]<<" ";
//			 cout<<endl;
		}else{
			int num=find_num_odd(Arr,queries[i][1]-1,queries[i][2]);
			v.push_back(num);
		}
	}
	return v;
} 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;// num in array
		cin>>n;
		vector<int> v;
		int q;// num of queries
		cin>>q;
		for(int i=0;i<n;i++){
		    int a;cin>>a;
		    v.push_back(a);
		}
		vector<vector<int>> qu;
		for(int i=0;i<q;i++){ //entring the queries
			vector<int> temp;
			for(int j=0;j<3;j++){
				int a;cin>>a;
				temp.push_back(a);
			}
			qu.push_back(temp);
		}
		vector<int> ans= solve(n,q,v,qu);
		for(int i=0;i<ans.size();i++)
		  cout<<ans[i]<<" ";
		cout<<endl;
	}
	return 0;
}
