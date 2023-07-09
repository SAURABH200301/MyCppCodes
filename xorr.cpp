#include<iostream>
using namespace std;
int xorr(char ar[],int n)
{
	if(n==1)
	 {
	 	return (long)(ar[0]^ar[1]);
	 }
	 else
	 {
	 	return (long)ar[0]^xorr(ar+1,n-1);
	 }
}
int main()
{
	int  n,start;
	cin>>n>>start;
	char arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=start+2*i;
	}
	for(int i=0;i<n;i++)
	{
		cout<<(int)arr[i]<<" ";
	}
	cout<<endl;
	int m=xorr(arr,n);
	cout<<m;
	
	return 0;
	
}

