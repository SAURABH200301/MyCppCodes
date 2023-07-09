#include<bits/stdc++.h>
using namespace std;
void InsertHeapSort(int pq[],int n)
{
	for(int i=0;i<n;i++)
	{
			int childIndex=i; //child index of the element which will be the last 
			
			while(childIndex>0)     
			{
				int parentIndex=(childIndex-1)/2;  //take parent index using childindex
				
				if(pq[childIndex]<pq[parentIndex]) 
				{
					int temp=pq[parentIndex];
					pq[childIndex]=pq[parentIndex];
					pq[parentIndex]=temp;
				}
				else{
					break;
				}
				childIndex=parentIndex;
			}
    }
//    for(int i=0;i<n;i++){
//    	cout<<pq[i]<<" ";
//	}
	cout<<endl;
        int size=n;
        
        while(size>1)
        {
		
        int temp=pq[0];
        pq[0]=pq[size-1];
        pq[size-1]=temp;
        size--;
    	    int parentIndex=0;
			int leftChildIndex=2*parentIndex+1;
			int rightChildIndex=2*parentIndex+2;
			
			while(leftChildIndex<size)
			{
			
				int minIndex=parentIndex;
				if(pq[minIndex]>pq[leftChildIndex])
				{
					minIndex=leftChildIndex;
				}
				if(rightChildIndex<size&& pq[rightChildIndex]<pq[minIndex])
				{
					minIndex=rightChildIndex;
				}
				if(minIndex==parentIndex)  //condition of leaf child
				{
					break;
				}
				int temp=pq[minIndex];   //swapping
				pq[minIndex]=pq[parentIndex];
				pq[parentIndex]=temp;
				
				parentIndex=minIndex;
				leftChildIndex=2*parentIndex+1;
				rightChildIndex=2*parentIndex+2;
			}
		}
}
int main()
{
	cout<<"SAURABH SHARMA \n 20SCSE1010717 \n";
	int n;
	cout<<"THIS PROGRAM IS FOR HEAP SORT IMPLEMENTATION"<<endl<<"enter the number of elements in array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements in array"<<endl;
	for(int i=0;i<n;i++)
	  cin>>arr[i];
	  InsertHeapSort(arr,n);
	for(int i=0;i<n;i++)
	 cout<<arr[i]<<" ";
	return 0;
}
