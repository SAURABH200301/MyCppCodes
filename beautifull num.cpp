#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int x,k,sum=0;
		cin>>x>>k;
		for(int i=0;i<k;i++)
		{
			sum+=pow(k,2*i);
		}
		if(x==sum)
		 cout<<"YES"<<endl;
		else
		 cout<<"NO"<<endl;
		 t--;
	}
	return 0;
}
