#include<iostream>  //Quicksort algorithm works on DIVIDE and CONQURE 
using namespace std;                        //time complexity=  O(nlog(n))
int Partition(int arr[],int s,int e)        //space complexity=O(log(n))
{
	int pivot=arr[e];
	int pIndex=s;
	for(int i=s;i<e;i++)
	{
		if(arr[i]<=pivot)
		{
			int temp=arr[i];
			arr[i]=arr[pIndex];
			arr[pIndex]=temp;
			pIndex++;
		}
	}
	int temp=arr[pIndex];
	arr[pIndex]=arr[e];
	arr[e]=temp;
	return pIndex;
}
void Quicksort(int arr[],int s,int e)       
{
	if(s<e)
	{
		int p=Partition(arr,s,e);
		Quicksort(arr,s,(p-1));
		Quicksort(arr,(p+1),e);
	}
}


int main()
{
	int size;
	cout<<"SAURABH: 20SCSE1010717"<<endl;
	cout<<"enter the size of array you wanna enter"<<endl;
	cin>>size;
	int myarr[size];
	cout<<"enter the array of size "<<" "<<size<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>myarr[i];
	}
	cout<<"before sorting "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
	Quicksort(myarr,0,size-1);
	cout<<"array after sorting "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<myarr[i]<<" ";
	}
	cout<<"\n SAURABH SHARMA \n";
	return 0;
	
}
