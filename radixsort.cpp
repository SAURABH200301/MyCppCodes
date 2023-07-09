#include<iostream>
using namespace std;
void countingsort(int arr[],int s,int div)
{
	int output[s];
	int count[10]={0};
	for(int i=0;i<s;i++)
	count[(arr[i]/div)%10]++;
	for(int i=1;i<10;i++)
	count[i]+=count[i-1];
	for(int i=s-1;i>=0;i--)
	{
	output[count[(arr[i]/div)%10]-1]=arr[i];
	count[(arr[i]/div)%10]--;
    }  
	for(int i=0;i<s;i++)
	 arr[i]=output[i];
}
int Getmax(int arr[],int s)
{
	int max=arr[0];
	for(int i=1;i<s;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	return max;
}
void Radixsort(int arr[],int s)
{
	int m=Getmax(arr,s);
	for(int div=1;(m/div)>0;div*=10)
	{
		countingsort(arr,s,div);
	}
}
int main()
{
	int size;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	int arr[size];
    cout<<"enter "<<size<<" numbers in the array "<<endl;
	for(int i=0;i<size;i++)
	    cin>>arr[i];
	 cout<<"array before sorting "<<endl;
	for(int i=0;i<size;i++)
	  cout<<arr[i]<<" ";  
	  cout<<endl; 
	Radixsort(arr,size);            //calling 
	cout<<"array after sorting "<<endl;
	for(int i=0;i<size;i++)
	  cout<<arr[i]<<" ";
	return 0;  
}
