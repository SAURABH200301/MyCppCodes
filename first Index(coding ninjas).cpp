#include<bits/stdc++.h>
using namespace std;
int firstIndex(int v[],int n, int x){
	if(n==0)
	  return -1;
	if(v[0]==x)
	  return 0;
	int ans =1+firstIndex(v+1,n-1,x);
	return ans;
}
int main(){
	int n,x;
	cin>>n>>x;
	int v[n];
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cout<<firstIndex(v,n,x);
	return 0;
}
