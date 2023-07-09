#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll k;
	cin>>k;
	while(k>0)
	{
		ll s,e;
		cin>>s>>e;
		if(s%3!=0)
		  {
		  	int j=s%3;

		  	s+=j+1;
		  }
		if(e%3!=0)
		{
			int j=e%3;
			e-=j;
		}
		
		cout<<(e-s)/3+1<<endl;
		k--;
	}
	return 0;
}
