#include<iostream>
using namespace std;
int fun(int a[],int s,int n)
{
	if(s==1)        //base condition
	 {
	 	if(a[0]==n)
	 	  return a[0];
	 	else
	 	  return -1;
	 }
	
	if(a[0]==n)   //simple calculation
	 return 0;
	 else
	{
	int b=fun(a+1,s-1,n);// recursive call
	if(b!=-1)
	  return b+1;
	else 
	  return -1;
    }
}
int main()
{
	int n;
	cout<<"enter the number of elements in array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element to find index"<<endl;
	int j;cin>>j;
	
	cout<<fun(arr,n,j);
	return 0;
}

