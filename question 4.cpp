#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;int arr[n],sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	vector<int> v;
	while(sum>0)
	{
		int r=sum%10;
		v.push_back(r);
		sum/=10;
	}int c=0;
	for(int i=0;i<v.size();i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
			if(v[i]==v[j])
			 c++;
		}
	}
	if(c!=0)
	{
		cout<<"NO"<<endl;
	}
	else
	 cout<<"YES"<<endl;
	 return 0;
}
