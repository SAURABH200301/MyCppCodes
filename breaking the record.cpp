#include<iostream>
using namespace std;
int main()
{
	int n,low,high,l=0,h=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	low=a[0];high=a[0];
	for(int i=1;i<n;i++)
	{
		if(high<a[i])
		{
			h++;
			high=a[i];
		}
		 if(low>a[i])
		{
			l++;
			low=a[i];
		}
	}
	cout<<h<<" "<<l<<endl;
	return 0;
}
