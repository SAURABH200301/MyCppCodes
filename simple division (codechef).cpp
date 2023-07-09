#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,y,c=0;
		cin>>n>>x>>y;
		int arr[n];
		for(int i=0;i<n;i++)
		  {
		    cin>>arr[i];
		    if(arr[i]<=x&& arr[i]%y==0)
		      c++;
	      }
	    cout<<c<<endl;	
	}
	return 0;
}
