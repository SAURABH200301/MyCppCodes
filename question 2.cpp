#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int count=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;i<n;i++)
			{
				if(((arr[i]+arr[j])%4==0)||arr[i]%4==0)
				 count++;
			}
		}
		cout<<count<<endl;
		t--;
	}
	return 0;
}
