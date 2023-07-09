#include<iostream>
using namespace std;
class Queue{
	         int arr[5];
	         int rear,front;
	         public:
	         	Queue()
	         	 {
	         	 	 rear=front=-1;
	         	 	 for(int i=0;i<5;i++)
	         	 	     arr[i]=0;
				  }
			bool isempty()
			  {
			  	if(rear==-1&&front==-1)
			  	   return true;
				else 
				return false;
		       }
		     bool isfull()
			 {
			 	if((rear+1)%5==front)
			 	       return true;
			 	   else 
					    return false;   
			   }  
			void enqueue(int val)
			{
				if(isfull())
				   return ;
				  else if(isempty())
				  {rear=front=0;}
				  else 
				  rear=(rear+1)%5;
				arr[rear]=val;   
			   }  
			int dequeue()
			{
				int x=0;
				if(isempty())
				return 0;
				else if(front==rear){
					x=arr[front];
					front=rear=-1;
				}
				else
				{
					x=arr[front];
					front=(front+1)%5;
				}
				return x;
				} 
			int count()
			{
				if(isempty())
				return 0;
				else
				return (rear-front+1);
			   } 
		void display()	
		{ 
		    int i=front; 
			for(;i<rear;i++)
			   cout<<arr[i]<<endl;
			 }     
		       
				  
};
int main()
{
	Queue q;
	int opt,value,position;
	do
	{ cout<<"DATA STRUCTURE - QUEUE "<<endl;
	  cout<<"1. To enter in the queue"<<endl;
	  cout<<"2. To remove from the queue"<<endl;
	  cout<<"3. To check queue is empty or not"<<endl;
	  cout<<"4. To check queue is full ot not"<<endl;
	  cout<<"5. To count the number of elements in the queue"<<endl;
	  cout<<"8. To display the element in the queue "<<endl;
	  cout<<"9. To clear the screen"<<endl;
	  cout<<"0. For end"<<endl;	
	  cin>>opt;
	  switch(opt)
	  {
	  	case 0: break;
	  	case 1: cout<<"enter the value"<<endl;
	  	        cin>>value;
	  	        q.enqueue(value);
	  	        break;
	  	case 2: if(q.dequeue()==0)
	  	        cout<<"queue is empty"<<endl;
	  	        else
	  	        cout<<"element that is dequeue is "<<q.dequeue()<<endl;
		        break;
		case 3: if(q.isempty())
		          cout<<"queue is empty"<<endl;
				  else 
				  cout<<"queue is not empty"<<endl;
				  break;
		case 4: if(q.isfull())
		         cout<<"queue is full"<<endl;
		         else 
		         cout<<"queue is not full"<<endl;
		         break;
		
		case 5: cout<<"number is elements in the queue is "<<q.count()<<endl;
		         break;
		
		case 8: q.display();
		         break;
		case 9: system("cls");
		          break;
		 default : cout<<"plz enter correct option"<<endl;         
				 		 		 		          
								  	  		        
	  }
	}while(opt!=0);
}

