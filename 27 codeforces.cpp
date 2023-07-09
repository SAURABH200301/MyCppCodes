#include <bits/stdc++.h>
using namespace std;
int t,n,a[200011]; 
int main(){
	cin>>t;
	while(t--){
		int ans=0;
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		for(int i=n;i>=1;i--)
			if(a[i]!=a[n])
			  {
			    ans++;
			    i-=n-i-1;
		      }
		cout<<ans<<endl;
	}
	return 0;
}	
