#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		  cin>>a[i];
		if(n==2)
		  cout<<0<<endl;
		else{
			int cost=0;
			for(int i=1;i<n;i++){
				if(a[i]==0){
					cost+=i+a[i];
				}
			}
			cout<<cost<<endl;
		}
	}
	return 0;
}
