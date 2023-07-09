#include<vector>

class PriorityQueue{
	vector<int> pq;
	public:
		PriorityQueue(){
			
		}
		
		bool isEmpty()
		{
			return pq.size()==0;
		}
		int getSize()
		{
			return pq.size();
		}
		int getMin(){
			if(isEmpty())
			 return 0;
			return pq[0];
		}
		
		void insert(int element)  //insert function 
		{
			pq.push_back(element);   //insert element in the end of the array
			int childIndex=pq.size()-1; //childindex of the element which will be the last 
			
			while(childIndex>0)     
			{
				int parentIndex=(childIndex-1)/2;  //take parent index using childindex
				o
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
		
		int removeMin(){
			if(isEmpty())\
			{
				return 0;
			}
			int ans=pq[0];
			pq[0]=pq[pq.size()-1];
			pq.pop_back();
			
			//DOWN HEAPIFY
			int parentIndex=0;
			int leftChildIndex=2*parentIndex+1;
			int rightChildIndex=2*parentIndex+2;
			
			while(leftChildIndex<pq.size())
			{
				int minIndex=parentIndex;
				if(pq[minIndex]>pq[leftChildIndex])
				{
					minIndex=leftChildIndex;
				}
				if(rightChildIndex<pq.size()&& pq[rightChildIndex]<pq[minIndex])
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
			return ans; 
		}
};
