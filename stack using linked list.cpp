#include<iostream>
using namespace std;
class Node
{
	public:
		int key,data;
		Node *next;
		Node()
		{
			key=0;data=0;next=NULL;
		}
		Node(int k,int d)
		{
			key=k;data=d;next=NULL;
		}
};
class stack
{
	public:
		Node*top;
		stack()
		{
			top=NULL;
		}
	bool isempty()
	{
		if(top==NULL)
		 return true;
		else
		 return false; 
	}
	bool check_if_node_exist(Node *n)
	{
		Node *temp=top;
		while(temp!=NULL)
		{
			if(temp->key==n->key)
			{
				return true;
			}
			temp=temp->next;
		}
		return false;
	}
	void push(Node *n)
	{
		if(top==NULL)
		  top=n;
		else if(check_if_node_exist(n))
		  cout<<"same key not allowed"<<"enter anyother key"<<endl;
		else 
		{
			Node *temp=top;
			top=n;
			n->next=temp;
			cout<<"NODE PUSHED"<<endl;
			}    
	}
	Node *pop()
	{
		Node *temp=NULL;
		if(isempty())
		{
			cout<<"STACK UNDERFLOW"<<endl;
			return temp;
		}
		else
		{
			temp=top;
			top=top->next;
			return temp;
		}
	}
	Node *peek()
	{
		if(isempty())
		{
			cout<<"STACK UNDERFLOW"<<endl;
			return NULL;
		}
	    else
	      return top;
	}
	int count()
	{
		int count=0;
		Node *temp=top;
		while(temp!=NULL)
		{
			count++;
			temp=temp->next;
		}
		return count;
	}
	void display()
	{
		Node *temp=top;
		while(temp!=NULL)
		{
			cout<<" ("<<temp->key<<","<<temp->data<<")";
			temp=temp->next;
		}
	}
};
int main()
{
	stack s1;
	int opt,key,data;
	do
	{
		cout<<"WHAT OPERATION DO YOU WANT TO PERFORM?  SELECT OPTION. ENTER 0 TO EXIT"<<endl;
		cout<<"1.push()"<<endl;
		cout<<"2.pop()"<<endl;
		cout<<"3.isempty()"<<endl;
		cout<<"4.peek()"<<endl;
		cout<<"5.count()"<<endl;
		cout<<"6.display()"<<endl;
		cout<<"7.clear screen()"<<endl;
		cin>>opt;
		Node * new_node = new Node();           //new_node is a pointer in stack and accessing a Node() formed in heap memory (created using new)
		switch(opt)
		{
			case 0:  break;
			case 1:
				cout<<"ENTER KEY AND VALUE OF NODE TO PUSH IN THE STACK"<<endl;
				cin>>key>>data;
				new_node->key=key;new_node->data=data;
				s1.push(new_node);
				break;
			case 2:
			    cout<<"POP FUNCTION IS CALLED -POPPED VALUE"<<endl;
				new_node=s1.pop();
				cout<<"top of stack is ("<<new_node->key<<","<<new_node->data<<")"<<endl;
				delete new_node;
				break;
			case 3:
			    if(s1.isempty())
				  cout<<"STACK IS EMPTY"<<endl;
				else 
				   cout<<"STACK IS NOT EMPTY"<<endl;
				break;
			case 4:
			    if(s1.isempty())	
				cout<<"STACK IS EMPTY"<<endl;
				else
				 {
				 	cout<<"peek function is called"<<endl;
				 	new_node=s1.peek();
				 	cout<<"top of stack is ("<<new_node->key<<","<<new_node->data<<")"<<endl;
				 }  
				 break;
			case 5:
			    cout<<"COUNT FUNCTION IS CALLED"<<endl;
				cout<<"Number of nodes in the stack is "<<s1.count()<<endl;
				break;
			case 6:
			    cout<<"Display function is called"<<endl;
				s1.display();
				break;
			case 7:
			  system("cls");
			  break;
			default:
			  cout<<"ENTER PROPER OPTION NUMBER"<<endl;  		    		
		}
	}while(opt!=0);
	return 0;
}
