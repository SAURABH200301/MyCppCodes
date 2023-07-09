#include<iostream>
using namespace std;
bool is_sorted(int arr[],int n)
{
	if(n==0||n==1)
	{
		return true;
	}
	if(arr[0]>arr[1])
	    return false;
	bool issmall=is_sorted(arr+1,n-1);
	return issmall;
}
int main()
{
	int arr[5];
	cout<<"enter the array"<<endl;
	for(int  i=0;i<5;i++)
	   cin>>arr[i];
	   if(is_sorted(arr,5))
	      cout<<"sorted"<<endl;
	    else
	       cout<<"not sorted"<<endl;
	   return 0;
}
