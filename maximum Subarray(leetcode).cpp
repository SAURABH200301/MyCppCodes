#include<bits/stdc++.h>
using namespace std;

int getmaxSub(vector<int> v){
	int maxi= *max_element(v.begin(),v.end());
	
	int sum=v[0];
	for(int i=1;i<v.size();i++){
		if(sum<0)
		  sum=0;
		sum+=v[i];
		maxi=max(maxi,sum);
	}
	return maxi;
}
int maxSubArray(vector<int> v){
//	int *a =new int[v.size()+1];
//	for(int i=0;i<v.size()+1;i++)
//	  a[i]=-1;
	int ab= getmaxSub(v);
	
	return ab;
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<maxSubArray(v);
	return 0;
}
