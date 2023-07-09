#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,p,x,y,c=0;
		cin>>n>>p>>x>>y;
		int arr[n];
		for(int i=0;i<n;i++)
		  cin>>arr[i];
		for(int i=0;i<p;i++){
			if(arr[i]==0)
			  c+=x;
			else
			  c+=y;
		}
		cout<<c<<endl;
	}
	return 0;
}
