#include<iostream>
using namespace std;
class stack
{ 
	int top;
	int arr[4];
  public:
  	stack()
  	{
  	     top=-1;
		 for(int i=0;i<4;i++)
		 {
		 	arr[i]=0;
		 }	
	}
	bool isempty()
	{
		if(top==-1)
		return true;
		else
		return false;
	}
	bool isfull()
	{
		if(top==3)
		return true;
		else
		return false;
	}
	void push(int val)
	{
		if(isfull())
		   {
		   	cout<<"stack is full - overflow"<<endl;
		   	return;
		   }
		else
		 top++;
		 arr[top]=val;    
	}
	int pop()
	{
		if(isempty())
		{
			cout<<"underflow"<<endl;
			return 0;
		}
		else
		{
		int v=arr[top];
		arr[top]=0;
		top--;
		return v;
	}
	}
	int peek(int i)
	{
		if(isempty())
		{
			cout<<"underflow"<<endl;
			return 0;
		}
		else 
		return arr[i];
	}
	int count()
	{
		return top;
	}
	void change(int pos,int val)
	{
		arr[pos]=val;
	}
	void display()
	{
		if(isempty())
		  cout<<"stack is empty"<<endl;
		  else{
		cout<<"your stack is follows"<<endl;
		for(int i=3;i>=0;i--)
		cout<<arr[i]<<endl;
	}
	}
};

int main()
{
	stack s;
	int opt,value,position;
	do
	{ cout<<"DATA STRUCTURE - STACK "<<endl;
	  cout<<"1. To enter in the stack"<<endl;
	  cout<<"2. To remove from the stack"<<endl;
	  cout<<"3. To check stack is empty or not"<<endl;
	  cout<<"4. To check stack is full ot not"<<endl;
	  cout<<"5. To know the element at the particular index"<<endl;
	  cout<<"6. To count the number of elements in the stack"<<endl;
	  cout<<"7. To change the element at the particular index"<<endl;
	  cout<<"8. To display the element in the stack "<<endl;
	  cout<<"9. To clear the screen"<<endl;
	  cout<<"0. For end"<<endl;	
	  cin>>opt;
	  switch(opt)
	  {
	  	case 0: break;
	  	case 1: cout<<"enter the value"<<endl;
	  	        cin>>value;
	  	        s.push(value);
	  	        break;
	  	case 2: cout<<"element that is popped is "<<s.pop()<<endl;
		        break;
		case 3: if(s.isempty())
		          cout<<"stack is empty"<<endl;
				  else 
				  cout<<"stack is not empty"<<endl;
				  break;
		case 4: if(s.isfull())
		         cout<<"stack is full"<<endl;
		         else 
		         cout<<"stack is not full"<<endl;
		         break;
		case 5: cout<<"enter the index "<<endl;
		         cin>>position;
				 cout<<"element at "<<position<<" is "<<s.peek(position)<<endl;
				 break;
		case 6: cout<<"number is elements in the stack is "<<s.count()<<endl;
		         break;
		case 7: cout<<"enter the element and the index"<<endl;
		         cin>>value;cin>>position;
				 cout<<endl;
				 break;
		case 8: s.display();
		         break;
		case 9: system("cls");
		          break;
		 default : cout<<"plz enter correct option"<<endl;         
				 		 		 		          
								  	  		        
	  }
	}while(opt!=0);
}
