#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,num;
		cin>>n>>k;
		vector<int> v;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end(),greater<>());
		int s=v[k-1];
		int count=0;
		for(int i=0;i<n;i++){
			if(v[i]>=s) count++;
			else break;
		}
		cout<<count<<endl;
	}
	return 0;
}
