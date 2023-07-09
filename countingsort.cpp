#include<iostream>
using namespace std;
void countingsort(int arr[],int s,int r)
{
	int output[s];
	int count[r]={0};
	for(int i=0;i<s;i++)
	  count[arr[i]]++;
	for(int i=1;i<r;i++)
	  count[i]+=count[i-1];
	for(int i=0;i<s;i++)
	{
		output[--count[arr[i]]]=arr[i];
		//count[arr[i]]--;
	}    
	for(int i=0;i<s;i++)
	 arr[i]=output[i];
}
int  main()
{
	int size;
	cout<<"SAURABH -20SCSE1010717"<<endl;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter the range of the number you want to enter "<<endl;
	int range;cin>>range;
    cout<<"enter "<<size<<" numbers in the array in between 0 to "<<range-1<<endl;
	for(int i=0;i<size;i++)
	    cin>>arr[i];
	 cout<<"array before sorting "<<endl;
	for(int i=0;i<size;i++)
	  cout<<arr[i]<<" ";  
	  cout<<endl; 
	countingsort(arr,size,range);            //calling 
	cout<<"array after sorting "<<endl;
	for(int i=0;i<size;i++)
	  cout<<arr[i]<<" ";
	return 0;  
}
