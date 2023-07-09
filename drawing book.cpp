#include<iostream>
using namespace std;
int main()
{
	int n,p;
	cin>>n>>p;
	if(p==1)
	{
	cout<<0<<endl;
	
    }
	else if(p>=(n/2+1))
	{
		cout<<(n/2+1)-(p/2+1)<<endl;
	}
	else
	{
    	cout<<p/2<<endl;
	}
	return 0;
}
