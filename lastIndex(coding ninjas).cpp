#include<bits/stdc++.h>
using namespace std;
int N; 
int lastIndex(int v[],int n,int x){
	if(n==0)
	  return -1;
	if(v[0]==x)
	  return n-1;
	int ans =1+lastIndex(v+1,n-1,x);
	return ans-1;
}
int main(){
	int x;
	cin>>N>>x;
	int v[N];
	for(int i=0;i<N;i++){
		cin>>v[i];
	}
	reverse(v,v+N);
	cout<<lastIndex(v,N,x);
	return 0;
}
