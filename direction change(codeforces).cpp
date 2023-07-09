#include<bits/stdc++.h>
using namespace std;
int dir=0;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		if((n==1) and m>2 or (m==1 and n>2))
		 cout<<-1<<endl;
		else{
			int ans =2*min(n,m)-2;
//			cout<<ans<<endl;
			ans+=2*(max(n,m)-min(n,m));
//			cout<<ans<<endl;
			if((max(n,m)-min(n,m))%2) ans--;
			cout<<ans<<endl;
		}
	}
	return 0;
}
