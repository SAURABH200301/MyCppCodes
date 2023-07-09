#include<bits/stdc++.h>
using namespace std;
void printPatt(int n){
	for(int i=0;i<=n;i++) cout<<'*';
	//*****
	cout<<endl;
	int n1=n/2;
	for(int i=1;i<n-1;i++){
		
		for(int j=0;j<=n1-i;j++) cout<<"*";
		
		for(int l=1;l<=2*i-1;l++) cout<<" ";
		
		for(int k=0;k<=n1-i;k++) cout<<"*";
		
		cout<<endl;
		
	}
	for(int i=0;i<=n;i++) cout<<'*';
	//*****
}
int main(){
	int n;
	cin>>n;
	printPatt(n);
	return 0;
}
