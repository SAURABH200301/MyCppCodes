#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k,sum=0,ans=0;
		cin>>n>>m>>k;
		int arr[n];
		for(int i=0;i<n;i++)
		  {
		     cin>>arr[i];
		     sum+=arr[i];
		     if(i==m-1 and sum==m)
		       ans = k;
	      }
	      
	      if(sum==n)
	        ans=100;
	     
	     cout<<ans<<endl;
		
	}
	return 0;
}
