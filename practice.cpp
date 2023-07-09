#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		if(i<(n/2))
		{
		for(int j=i;j<(n/2);j++)
		{
			cout<<"*";
			
		}
	
		for(int k=1;k<=2*i;k++)
		{
			cout<<" ";
		}
		for(int j=i;j<(n/2);j++)
		{
			cout<<"*";
		}
		cout<<endl;
	
	}
	else
	{
		for(int p=(n/2);p<=i;p++)
		{
			cout<<"*";
		}
		for(int k=i+2;k<(2*n-i);k++)
		{
			cout<<" ";
		}
		for(int p=(n/2);p<=i;p++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
		
}
 return 0;
}
