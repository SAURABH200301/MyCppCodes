#include<bits/stdc++.h>
using namespace std;
int maxArea(vector<int> v){
	int l=0,r=v.size()-1;
	int maxx=0;
	while(l<r){
		int lh =v[l];
		int rh= v[r];
		maxx= max(maxx,min(lh,rh)*(r-l));
		if(lh<rh) l++;
		else r--;
	}
	return maxx;
}

int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<maxArea(v);
	return 0;
}
