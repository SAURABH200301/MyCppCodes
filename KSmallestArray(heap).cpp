#include<bits/stdc++.h>
using namespace std;                                    
void KSmallestArray(int arr[],int n,int k)
{
	priority_queue<int,vector<int>,greater<int> > pq;  //priority_queue<int,vector<int>,greater<int> > pq;(this converts max to min priority queue
	for(int i=0;i<k;i++)
	  pq.push(arr[i]);
	for(int i=k;i<n;i++)
	{
		if(pq.top()>arr[i])                           //if(pq.top()<arr[i])      
		{
			pq.pop();
			pq.push(arr[i]);
		}
	}
	while(!pq.empty())
	  {
	  	cout<<pq.top()<<" ";
	  	pq.pop();
	  }
}
int main()
{
	int n,k;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>k;
	KSmallestArray(arr,n,k);
	return 0;
}
