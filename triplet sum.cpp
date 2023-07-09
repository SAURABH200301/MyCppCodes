#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,count=0;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cin>>x;
		sort(arr,arr+n);
		for(int i=n-1;i>=2;i--)
		{
			if(x==(arr[i]+arr[i-1]+arr[i-2]))
			  count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
