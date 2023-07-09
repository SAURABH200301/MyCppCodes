#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
	int i=l,j=m+1,k=l;
	int temp[r];
	while(i<=m&&j<=r)
	{
		if(arr[i]<=arr[j])
		{
			temp[k]=arr[i];
			i++;k++;
		}
		else 
		{
			temp[k]=arr[j];
			j++,k++;
		}
	}
	while(i<=m)
	{
		temp[k]=arr[i];
		i++,k++;
	}
	while(j<=r)
	{
		temp[k]=arr[j];
		j++,k++;
	}
	for(int p=l;p<=r;p++)
	{
		arr[p]=temp[p];
	}
}
void mergesort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
int main()
{
	int s;
	cin>>s;
	int arr[s],arr1[s];
	for(int i=0;i<s;i++)
	 cin>>arr[i];
	mergesort(arr,0,s-1);
	for(int i=0;i<s;i++)
	   arr1[i]=(s-i)*arr[i];  //14 20 30 53
	int m=0;
	for(int i=0;i<s;i++)
	{
		if(arr1[i]>m)
		m=arr1[i];
		
	}
	cout<<m<<endl;
	return 0;
	
	
}
