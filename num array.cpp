#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int k,q;
		int n;cin>>n>>k>>q;
		int arr[n];
		cout<<"ere"<<endl;
		for(int i=0;i<n;i++)
		  cin>>arr[i];
		for(int i=0;i<k;i++)
		{
			for(int j=n/k*(i);i<n/k*(i+1);j++)
			  cout<<arr[j]<<" ";
		}
		t--;
	}
	return 0;
}
