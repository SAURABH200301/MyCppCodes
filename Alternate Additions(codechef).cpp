#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		if(n==m)
		  cout<<"YES"<<endl;
		else if(n%2==0 and m%2!=0)
		  cout<<"NO"<<endl;
		else if(n%2!=0 and m%2!=0)
		  cout<<"NO"<<endl;
		else
		  cout<<"YES"<<endl;
	}
	return 0;
}
