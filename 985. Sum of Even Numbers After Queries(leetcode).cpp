#include<bits/stdc++.h>
using namespace std;
// [1,2,3,4], queries = [[1,0],[-3,1],[-4,0],[2,3]]
vector<int> sumEvenAfterQueries(vector<int> v,vector<vector<int>> q){
	if(v.size()==0 or q.size()==0) return v;
	int sum=0;
	vector<int> ans;
	for(int i=0;i<v.size();i++){
		if(v[i]%2==0) sum+=v[i];
	}
	for(int i=0;i<q.size();i++){
		if(v[q[i][1]]%2==0){
			sum-=v[q[i][1]];
		}
			v[q[i][1]]+=q[i][0];
			if(v[q[i][1]]%2==0){
				sum+=v[q[i][1]];
				ans.push_back(sum);
			}else{
				ans.push_back(sum);
			}
		
	}
	return ans;
}
int main(){
	int n,q;
	cin>>n>>q;
	vector<int> v;
	vector<vector<int>> qi;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	for(int i=0;i<q;i++){
		int a,b;
		cin>>a>>b;
		vector<int> vec;
		vec.push_back(a);
		vec.push_back(b);
		qi.push_back(vec);
	}
	vector<int> ans=sumEvenAfterQueries(v,qi);
	for(int i=0;i<ans.size();i++)
	    cout<<ans[i]<<" ";
	return 0;
}
