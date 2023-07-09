#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];int sum=0;
		for(int i=0;i<n;i++)
		{
			int first=i;
			int count=i;
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				  count=j;
			}
			sum+=count-first;
		}
		cout<<sum<<endl;
		t--;
	}
	return 0;
}
