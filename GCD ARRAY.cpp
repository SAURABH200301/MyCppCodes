#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	
	int a,b,k;
	cin>>a>>b>>k;
	int s=(b+1)/2-a/2;
	if(s<=k||(a==b&&a!=1)) puts("YES");
	else puts("NO"); 
	
	}
return 0;
}
