#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,x,sum=0;
		cin>>n>>x;
         vector<int> v;
         for(int i=0;i<n;i++)
         {
         	int f;
         	cin>>f;
         	v.push_back(f);
		 }
		 int i=0;
		 while(i<n)
		 {
		 	if(v[i]%x==0)
		 	{
		 		for(int j=0;j<x;j++)
		 		{
		 			v.push_back(v[i]/x);
		 			n++;
				 }
			 }
			 else
			  break;
			 i++;
		 }
		 for(int i=0;i<n;i++)
		 {
		 	sum+=v[i];
		 }
		 cout<<sum<<endl;
		t--;
	}
	return 0;
}
