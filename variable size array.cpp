#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	//int a[n][10];
	vector<vector<int> > a;
	for(int i=0;i<n;i++)
	{
		int c;
		cin>>c;
		vector<int> b;
		 for(int j=0;j<c;j++)
		  {
		  	int u;cin>>u;
		  	b.push_back(u);
		  	//cin>>a[i][j];
		  }
		  a.push_back(b);
	}
	for(int k=0;k<q;k++)
	{
		int i,j;
		cin>>i>>j;
		cout<<a[i][j]<<endl;
	}
	return 0;
}
