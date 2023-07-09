#include <bits/stdc++.h>
using namespace std;
void fun(int n,int k,int s)
{
	if(s>k)
	{
		cout<<"ok"<<endl;
	}
	for( int i=1;i  ;i++)
		{
			if(s<n)
			{
			s=pow(2,i);
			cout<<"s"<<s<<endl;
		    }
			if(s>=k)
			{
				cout<<i+1<<endl;
				break;
			}
			else if(s>=n)
			{
				fun(k-n,k,s);
			}
		}
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,k,s=0;            //n is no. of lotus in pond 2
		cin>>n>>k;             //k is max lotus 
		fun(n,k,s);
		t--;
	}
	return 0;
 }
