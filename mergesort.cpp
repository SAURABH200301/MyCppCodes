#include<iostream>                  //MERGESORT  algorithm works on DIVIDE and CONQURE
using namespace std;                           //time complexity=O(nlog(n))
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
	int size;
	cout<<"SAURABH: 20SCSE1010717"<<endl;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	int myarr[size];
	for(int i=0;i<size;i++)
	{
		cin>>myarr[i];
	}
	cout<<"before sorting "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<" ";
	}
	mergesort(myarr,0,size-1);
	cout<<endl<<"array after sorting "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<" ";
	}
	return 0;
}
