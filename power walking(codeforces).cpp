#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		map<int,int> mp;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			mp[x]++;
		}
		int t;
		t=mp.size();
		for(int i=1;i<=n;i++)
		printf("%d ",max(i,t));
	}
}
