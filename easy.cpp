#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m=INT_MIN,j=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	  cin>>arr[i];

	if(n==1)
	  {
	    cout<<m;
	  }
	else{
	
	sort(arr,arr+n);
	for(int i=n-1;i>=0;i--)
	{
		if(arr[i-1]<arr[i])
		  {
		     cout<<arr[i-1];
		     j=1;
		     break;
	      }
	}
	if(!j)
	  cout<<m;
    }
	 return 0;
}
