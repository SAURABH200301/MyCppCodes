#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> v;
		for(int i=2;i<=k;i++){
			int x=n%i;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		cout<<v[v.size()-1]<<endl;
	}
	return 0;
}
