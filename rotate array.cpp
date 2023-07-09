#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;cin>>t;
  while(t--)
  {
  	int n,r;cin>>n;int arr[n];
  	for(int i=0;i<n;i++)
  	{
  	    cin>>arr[i];
	}
	cin>>r;
	reverse(arr,arr+n);
	reverse(arr,arr+n-r);
	reverse(arr+n-r,arr+n);
	for(int i=0;i<n;i++)
	 cout<<arr[i]<<" ";
  }
  return 0;
}
