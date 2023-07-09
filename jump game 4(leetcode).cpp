#include<bits/stdc++.h>
using namespace std;
int sum=0;
//6
//2
//1 -1 -2 4 -7 3
int jumpGame(vector<int> v,int k,int i){
	if(i>v.size()) return INT_MIN;
	if(i==v.size()-1) return 0;
	if(i>v.size()-k) return v[i]+jumpGame(v,k,i+1);
//	cout<<i<<endl;
	int a =jumpGame(v,k,i+1);
	int b= jumpGame(v,k,i+k);
	cout<<v[i]<<" "<<a<<" "<<b<<endl;
    if(a!=INT_MIN and b!=INT_MIN){
    	sum+=v[i]+max(a,b);
	}
	else if(a==INT_MIN and b!=INT_MIN){
		sum+=v[i]+b;
	}
	else
	  sum+=v[i]+a;
	  cout<<sum<<endl;
	return sum;
}
int maxResult(vector<int> v,int k){
	if(v.size()==1) return v[0];
	
	return jumpGame(v,k,0);
}
int main(){
	int n,k;
	cin>>n>>k;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<maxResult(v,k);
	return 0;
}
