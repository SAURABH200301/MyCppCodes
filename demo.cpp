#include<bits/stdc++.h>
using namespace std;
void recursive_sort(int arr[],int s)
{
	if(s<0)
	{
		return;
	}
	int min,pivot=arr[0],index;
	for(int i=1;i<s;i++)
	{
		if(pivot>arr[i])
		  {
		  min=arr[i];
		  index=i;
	      }
	}
	arr[index]=pivot;
	arr[0]=min;
	recursive_sort(arr+1,s-1);
}
int main()
{
   int s;
   cout<<"Enter the size of array"<<endl;
   cin>>s;
   int arr[s];
   cout<<"enter the array"<<endl;
   for(int i=0;i<s;i++)
   {
   	cin>>arr[i];
   }	
	recursive_sort(arr,s);
	return 0;
}
