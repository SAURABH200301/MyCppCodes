#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,rb,cb,rd,cd;
		cin>>n>>m>>rb>>cb>>rd>>cd;
		int ans= INT_MAX;
		if(rd>=rb)
		  ans= min(ans,rd-rb);
		else 
		  ans = min(ans,2*(n-rb)+rb-rd);
		if(cd>=cb)
		  ans = min(ans,cd-cb);
		else
		  ans = min(ans, 2*(m-cb)+cb-cd);
		  
		cout<<ans<<endl;
	}
	return 0;
}
