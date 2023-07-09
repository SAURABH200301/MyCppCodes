#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int min(int i,int e,int arr[])
{
	int min=arr[i];
	for(int j=i+1;j<e;i++)
	{
		if(min>arr[j])
		   min=arr[j];
	}
	return min;
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,m,sum=0;
		cin>>n>>m;
		long long int fri[n],ass[n]={99999999};vector<int> pri;
		for(int i=0;i<n;i++)
		  cin>>fri[i];
		for(int i=0;i<m;i++)
		 {
		 	int p;cin>>p;
		 	pri.push_back(p);
		 }
		sort(pri.begin(),pri.end());
		int k=0;
		for(int i=0;i<n;i++)
		{
			
			if(k==m)
			   k=0;
			int b=min(0,m,pri);
			if(ass[i]>min)
			   ass[i]=min;
			k++;   
		}
		for(int i=0;i<n;i++)
		sum+=ass[i];
		cout<<sum<<endl;
		t--;
	}
}
