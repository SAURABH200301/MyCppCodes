#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int k,m,n,sum=0;
		cin>>k>>m>>n;
		if(k<m)
		{
			while(k!=m)
		{
			k=k*2;
			sum+=1;
			if(k!=m)
			 {
			 	k-=1;
			 	sum+=1;
			 }
		}
		}
		else 
		{
			while(k!=m)
			{
				
			}
		}
	    cout<<sum<<endl;
		t--;
	}
return 0;
}
