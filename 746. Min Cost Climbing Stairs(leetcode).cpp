#include<bits/stdc++.h>
using namespace std;
int minCost(vector<int> v,int *a,int i){
	if(i>=v.size()+1)
	  return 0;
	if(a[i]!=-1){
		return a[i];
	}
//	int b=INT_MAX,c=INT_MAX,d=INT_MAX,e=INT_MAX;
    int b,c,d,e;
	 b = v[i]+minCost(v,a,i+1);
	 c = v[i]+minCost(v,a,i+2);
	 d = v[i+1]+minCost(v,a,i+2);
	 e = v[i+1]+minCost(v,a,i+3);
	cout<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
//    cout<<i<<endl;
	a[i]=min(min(c,b),min(d,e));
//	cout<<a[i]<<endl;
	return a[i];
}
int minCostClimbingStairs(vector<int> v){
	if(v.size()==3)
	  return min(v[0]+v[2],v[1]);
	if(v.size()<=2)
	  return v[0];
	int *a= new int[v.size()+1];
	for(int i=0;i<=v.size();i++)
	  a[i]=-1;
	return minCost(v,a,0);
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<minCostClimbingStairs(v);
	return 0;
}
