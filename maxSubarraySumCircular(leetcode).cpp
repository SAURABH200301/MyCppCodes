#include<bits/stdc++.h>
using namespace std;
int maxSubarraySumCircular(vector<int> v){
	int maxi= *max_element(v.begin(),v.end());
	int n=v.size();
	int sum=v[0];
	for(int i=1;i<n;i++){
		if(sum<0)
		  sum=0;
		sum+=v[(i)%n];
		maxi=max(maxi,sum);
	}
	return maxi;
}
int main(){
int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<maxSubarraySumCircular(v);
	return 0;
}
