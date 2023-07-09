/*#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int p=0,m=0,c=0,n;
	cin>>n;
	c=n;
	for(int i=1;i<=n;i++)
	{
		p=p+i;
		m=m+(i*2);
        c=c-i-(i*2);
		if(p+m<n&&c<i)
		{
			cout<<"Patlu";
			exit(0);
		} 
	}
	cout<<"Motu";
	return 0;
}*/
#include<iostream>
#include<stdio.h>
using namespace std;
void mean(int q,int arr[])
{
	while(q>0)
	{
	int l,r,sum=0;
	cin>>l>>r;
	for(int i=l;i<=r;i++)
	{
		sum+=arr[i];
	}
	cout<<sum/(r-l+1)<<endl;
	q--;
}
}
int main()
{
	int s,q;
	cin>>s>>q;
	int a[s];
	for(int i=0;i<s;i++)
	   cin>>a[i];
	mean(q,a);
		 return 0;
}


