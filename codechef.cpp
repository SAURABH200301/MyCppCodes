#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,count=0,flag=0;
	cin>>n>>m;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int j,k;
		cin>>j>>k;
		if(v.empty())
		{
			v.push_back(j);
			v.push_back(k);
		}
		else if(find(v.begin(), v.end(),k) != v.end())
		  {
		  	count++;
		  }
		else
		{
			if(flag!=count)
			{
				flag=count;
				v.push_back(j);
			}
			v.push_back(k);
		}
	}
	cout<<count<<endl;
	return 0;
}
