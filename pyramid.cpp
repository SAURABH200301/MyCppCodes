#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			for(int j=n;j>i;j--)
			  cout<<" ";
			  for(int k=0;k<(2*i+1);k++)
			  cout<<"*";
			  cout<<endl;
		}
		t--;
	}
	return 0;
}
