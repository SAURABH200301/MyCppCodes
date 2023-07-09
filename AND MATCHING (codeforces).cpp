#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
       int n,k;
	   cin>>n>>k;
	   if(k==0){
	   	for(int i=0;i<n/2;i++)
	   	  cout<<i<<" "<<(i^(n-1))<<endl;
	   }		
	   else if(k==n-1 and n!=4){
	   	cout<<n-2<<" "<<n-1<<endl;
	   	cout<<1<<" "<<n-3<<endl;
	   	cout<<0<<" "<<2<<endl;
	   	for(int i=3;i<n/2;i++){
	   		cout<<i<<" "<<((n-1)^i)<<endl;
		   }
	   }
	   else if(k==n-1 and n==4){
	   	cout<<-1<<endl;
	   }
	   else if(k>0 and k<n-1){
	   	cout<<k<<" "<<n-1<<endl;
	   	cout<<0<<" "<<((n-1)^k)<<endl;
	   	for(int i=0;i<n/2;i++){
	   		if(i!=0 and i!=min(k,((n-1)^k)))
	   		  cout<<i<<" "<<((n-1)^i)<<endl;
		   }
	   }
	}
	return 0;
}
