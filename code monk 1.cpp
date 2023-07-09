#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t>0)
	{
		int count=0;
		cin>>n;
		int m[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>m[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				for( int k=0;k<n;k++)
				{
					for(int o=j;o<n;o++)
					 {
					 if(i<=k&&j<=o)
					{
					if(m[i][j]>m[k][o])
					count++;
				    }
			        }
				}
			}
		}
		cout<<count<<endl;
		t--;
	}
	
	return 0;
}
