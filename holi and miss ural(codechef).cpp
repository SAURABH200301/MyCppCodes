#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int d[n],r[n];
		for(int i=0;i<n;i++)
		  cin>>d[i];
		for(int i=0;i<n;i++)
		  cin>>r[i];
	    int minn=1000000,petrol=100000;
	    for(int i=0;i<n;i++)
	    {
	    	int a = d[i]*k+r[i];
	    	if(d[i]*k<petrol || a<minn)
	    	{
	    	  minn=a;
	    	  petrol=d[i]*k;
	        }
		}
		cout<<minn<<endl;
	}
	return 0;
}
