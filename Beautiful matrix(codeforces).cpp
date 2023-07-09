#include<bits/stdc++.h>
using namespace std;
int main()
{
	pair<int,int> p;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			int a;cin>>a;
			if(a==1)
			{
				p.first=i;
				p.second=j;
			}
		}
	}
	cout<<fabs(3-p.first)+fabs(3-p.second);
	return 0;
}
