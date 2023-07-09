#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	if(k==1 or k==n) cout<<n-1<<endl;
	else{
		cout<<2*min(k-1,n-k)+max(k-1,n-k)<<endl;
	}
	return 0;
}
