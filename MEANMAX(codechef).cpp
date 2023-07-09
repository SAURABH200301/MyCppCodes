#include<bits/stdc++.h>
#define ll long long
#define f double
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		f arr[n];
		for(ll i=0;i<n;i++)
		  {
		    cin>>arr[i];
		}
		if(n==2)
		{
			cout<<showpoint<<setprecision(7)<<arr[0]+arr[1]<<endl;
		}
		else{
		  sort(arr,arr+n);
		  f sum1=0,sum2=0;
		   for(ll i=0;i<n;i++)
		   {
		   	   if(i%2==0)
		   	      sum1+=arr[i];
		   	    else
		   	      sum2+=arr[i];
		   	}
		   	int m=0,l=0;
		   	if(n%2!=0)
		   	{
		   		m=n/2+1;
		   		l=n-m;
			   }
			else 
			{
				m=n/2;
				l=n-m;
			}
		   	cout<<showpoint<<setprecision(7)<<(sum1/m)+(sum2)/l<<endl;
     	}
		
	}
	return 0;
}
