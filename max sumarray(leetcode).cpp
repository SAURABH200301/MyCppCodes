#include<bits/stdc++.h>
using namespace std;
int fun(int a[],int n){
	int max_so= INT_MIN;
	int max_end = 0;
	for(int i=0;i<n;i++){
		max_end+=a[i];
		if(max_so<max_end)
		   max_so=max_end;
		if(max_end<0)
		   max_end=0;
	}
	return max_so;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<fun(a,n);
	return 0;
}
