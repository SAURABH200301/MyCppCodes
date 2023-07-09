#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	   cin>>a[i];
	for(int i=0;i<n;i++)
	  cin>>b[i];
	
	int count=0;
	for(int i=0;i<n;i++){
		count+=pow(pow(a[i],2),pow(b[i],2),1/2);
	}
	cout<<count<<endl;
	return 0;
}
