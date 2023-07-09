#include<iostream>
using namespace std;
void sort(int arr[],int d,int e )
{
	
	for(int i=0,j=e;j<d ;i++,j++)
	{
		
		
			int temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
		
	}
	cout<<"array is"<<endl;
	for(int i=0;i<d;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
int main()
{
	int a[10],b;
	cout<<"enter the array size to want to initiallize"<<endl;
	cin>>b;
	cout<<"enter the array "<<endl;
	for(int i=0;i<b;i++)
	{
		cin>>a[i];
	}
	int c;
	cout<<"number of element u want to sort "<<endl;
	cin>>c;
	sort(a,b,c);
	return 0;
}
