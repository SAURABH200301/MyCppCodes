#include<iostream>
#include<math.h>
using namespace std;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
class MinHeap   //MINHEAP CLASS
{
   public:
   	int *harr;
   	int capacity;
   	int heap_size;
   	MinHeap(int cap)  //CONSTRUCTOR
   	{
   		heap_size=0;
   		capacity=cap;
   		harr=new int[cap];
   		for(int i=0;i<cap;i++)
   		   harr[i]=0;
	   }
    void linearsearch(int val)//LINEAR SEARCH
	{
		for(int i=0;i<heap_size;i++)
		{
			if(harr[i]==val)
			{
				cout<<"Element Found"<<endl;
				return;
			}
			
		}
		cout<<"Element Not Found"<<endl;
	}
	void printArray()    //PRINTS ARRAY
	{
		for(int i=0;i<heap_size;i++)
		{
			cout<<harr[i]<<" ";
		}
		cout<<endl;
	}	
	int height()//RETURNS HEIGHT OF HEAP
	{
		return ceil(log2(heap_size-1))-1;
	}
	int parent(int i)// RETURNS PARENT NODE INDEX
	{
		return (i-1)/2;
	}
	int left(int i)//RETURNS LEFT NODE INDEX WRT I
	{
		return (2*i+1);
	}
	int right(int i)//RETURNS RIGHT NODE INDEX ERT I
	{
		return 2*i+2;
	}
	void insertkey(int k)//INSERT KEY
	{
		if(heap_size==capacity)
		{
			cout<<"OVERLOADED"<<endl;
			return;
		}
			heap_size++;
			int i=heap_size-1;
			harr[i]=k;
			while(i!=0&&harr[parent(i)]>harr[i])
			{
				swap(harr[i],harr[parent(i)]);
				i=parent(i);
			}
	}
	void MinHeapify(int i)
	{
		int l=left(i);
		int r=right(i);
		int smallest=i;
		if(l<heap_size&&harr[l]<harr[i])
		{
			smallest=l;
		}
		if(r<heap_size&&harr[r]<harr[i])
		{
			smallest=r;
		}
		if(smallest!=i)
		{
		   swap(harr[i],harr[smallest]);
		   MinHeapify(smallest);	
		}
	}
	int extractMin() //EXTRACT MINIMUM 
	{
		if(heap_size<0)
		{
			return INT_MAX;
		}
		if(heap_size==1)
		{
			heap_size--;
			return harr[0];
		}
		int root=harr[0];
		harr[0]=harr[heap_size-1];
		heap_size--;
		MinHeapify(0);
		return root;
	}
	void decreasekey(int i,int val)
	{
		harr[i]=val;
		while(i!=0&&harr[parent(i)]>harr[i])
		{
			swap(harr[parent(i)],harr[i]);
			i=parent(i);
		}
	}
	void deletekey(int  i)
	{
		decreasekey(i,INT_MIN);
		extractMin();
	}
	int  GetMin()
	{
		if(heap_size==0)
		  {
		  	cout<<"Heap is Empty"<<endl;
		  	return 0;
		  }
		return harr[0];
	}
	void GetunSortedArray()
	{
		cout<<"Enter the Unsorted Array"<<endl;
		for(int i=0;i<capacity;i++)
		{
			cin>>harr[i];
		}
	}
	void HeapSort()
	{
		int temp[capacity];
		for(int j=0;j<capacity;j++)
		{
			temp[j]=extractMin();
			cout<<temp[j]<<" ";
		}
	}
};
int main()
{
	int s;
	cout<<"ENTER THE SIZE OF THE HEAP"<<endl;
	cin>>s;
	MinHeap obj(s);
	cout<<"HEAP IS CREATED"<<endl;
	
	int opt,val;
	do
	{
		cout<<"What Operation do you want to perform? \n Select Option number .Enter ) to exit"<<endl;
		cout<<"1. Insert Key/Node"<<endl;
		cout<<"2. Search Key/Node"<<endl;
		cout<<"3. Delete Key/Node"<<endl;
		cout<<"4. Get Min"<<endl;
		cout<<"5. Extract Min"<<endl;
		cout<<"6. Height of Heap"<<endl;
		cout<<"7. Print/Traversal Heap Values"<<endl;
		cout<<"8. Clear Screen"<<endl;
		cout<<"9. To Perform HeapSort"<<endl;
		cout<<"0. Exit Program"<<endl;
		cin>>opt;
		switch(opt)
		{
			case 0: exit(0);
			case 1: cout<<"Enter the value "<<endl;
			        cin>>val;
			        obj.insertkey(val);
			        cout<<"Value inserted"<<endl;
			        break;
			case 2: cout<<"Enter the value you want to search"<<endl;
			        cin>>val;
			        obj.linearsearch(val);
			        break;
			case 3: cout<<"Enter The index of the element to be deleted"<<endl;
			        cin>>val;
			        obj.deletekey(val);
			        break;
		    case 4: cout<<"Min in the Heap is "<<obj.GetMin()<<endl;
		            break;
		    case 5: cout<<"Extract Min"<<endl;
		            cout<<obj.extractMin()<<endl;
		            break;
		    case 6: cout<<"Height of the HEAP is "<<obj.height()<<endl;
		            break;
		    case 7: cout<<"Printing in array form"<<endl;
		            obj.printArray();cout<<endl;break;
		    case 8: system("cls");
		            break;
		    case 9: obj.GetunSortedArray();
		            obj.printArray();cout<<endl;
		            for(int i=obj.capacity/2-1;i>=0;i--)
		                 obj.MinHeapify(i);
		            obj.HeapSort();
		            break;
		}
	}while(opt!=0);
	return 0;
}
