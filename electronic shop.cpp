#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int b,n,m;
	cin>>b>>n>>m;
	int k[n],d[m]; vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>k[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>d[i];
	}
	if(k[0]+d[0]>b)  
	   cout<<-1<<endl;
	else
	  {
	  	for(int i=0;i<n;i++)
	  	{
	  		for(int j=0;j<m;j++)
	  		{
	  			int l=k[i]+d[j];
	  			if(l<=b)
	  			  {
	  			  	v.push_back(l);
					}
			  }
		  }
		  sort(v.begin(),v.end());
		  cout<<v[v.size()-1]<<endl;
		  
	  }
	  return 0;
}
