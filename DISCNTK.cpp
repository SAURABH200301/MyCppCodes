#include<bits/stdc++.h>
using namespace std;
void fun(vector<int> v,int s,int e)
{
	vector<int> vec;
	for(int i=s;i<e;i++)
	{
		if(vec.empty())
		  vec.push_back(v[i]);
		else
		{
		    auto a=find(vec.begin(),vec.end(),v[i]);
			if(a==vec.end())
			  vec.push_back(v[i]);
		}
	}
	cout<<vec.size()<<" ";
}
int main()
{
   int t;
   cin>>t;
   while(t>0)
   {
   	 int n,k;cin>>n>>k;
   	 vector<int> v;
   	 for(int i=0;i<n;i++)
   	 {
   	 	int j;cin>>j;
   	 	v.push_back(j);
	}
	for(int i=0;i<n-k+1;i++)
	{
		fun(v,i,i+k);
	}
	cout<<endl;
    t--;   	
   }	
   return 0;
}
