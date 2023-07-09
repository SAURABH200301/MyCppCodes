#include<bits/stdc++.h>
using namespace std;
int numTrees(int n){
	int *numTree = new int[n+1];
	//for 0 nodes =1 tree
	//for 1 nodes =1 tree
	numTree[0]=1;
	numTree[1]=1;
	for(int i=2;i<=n;i++){
		int total=0;
		for(int j=1;j<i+1;j++){
			int left= j-1;
			int right= i-j;
			total+=numTree[left]* numTree[right];
		}
		numTree[i]=total;
		cout<<i<<" "<<total<<endl;
	}
	return numTree[n];
}
int main(){
	int n;
	cin>>n;
	cout<<numTrees(n);
	return 0;
}
