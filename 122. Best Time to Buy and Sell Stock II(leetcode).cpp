#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> v){
	if(v.size()==2){
		return max(v[1]-v[0],0);
	}
	int temp=0;
	for(int i=1;i<v.size();i++){
		if(v[i]>v[i-1])
		  temp+=v[i]-v[i-1];
	}
	return temp;
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<maxProfit(v);
	return 0;
}
