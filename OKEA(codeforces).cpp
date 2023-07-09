#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(k==1){
			cout<<"YES"<<endl;
			for(int i=1;i<=n;i++)
			  cout<<i<<endl;
			continue;
		}
		if(n%2){
			cout<<"NO"<<endl;
			continue;
		}
		cout<<"YES"<<endl;
		for(int i=1;i<=n*k;i+=2){
			int c=0;
			while(c<k){
				cout<<i<<" ";
				c++,i+=2;
			}
			i-=2;
			cout<<endl;
		}
		for(int i=2;i<=n*k;i+=2){
			int c=0;
			while(c<k){
				cout<<i<<" ";
				c++,i+=2;
			}
				i-=2;
				cout<<endl;
		}
	}
	return 0;
}
