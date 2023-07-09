#include<bits/stdc++.h>
using namespace std;
vector<int> V;
void AllIndex(int v[],int n,int i,int x){
	if(i>=n) return ;
	if(v[i]==x)
	   V.push_back(i);
	AllIndex(v,n,i+1,x);
}
int main(){
	int n,x;
	cin>>n>>x;
	int v[n];
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	AllIndex(v,n,0,x);
	for(int i=0;i<V.size();i++)
	   cout<<V[i]<<" ";
	return 0;
}
