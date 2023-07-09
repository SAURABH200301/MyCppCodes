#include<bits/stdc++.h>
using namespace std;
// 6 
// 4
// 1 2 3 1 1 7
int fun(vector<int> v,int k){
    map<int,int> m;
	for(int i=0;i<v.size();i++){
		
		m[v[i]]++;
	}
	int c=0;
	for(int i=0;i<=v.size()-k;i++){
		map<int,int> u=m;
		for(int j=i;j<i+k;j++){
		  //  cout<<i<<" "<<v.size()-k+1<<endl;
			u[v[j]]--;
		}
		for(auto k: u){
			if(k.second==0)
			  c++;
		}
	}
	return c;
}
int main(){
	int n,k;
	cin>>n>>k;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<fun(v,k);
	return 0;
}
