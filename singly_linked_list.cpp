#include<iostream>              //LINKED LIST
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
			key=k;data =d;
		}
};

class singlylinkedlist
{
	public:
		Node*head;
		singlylinkedlist()
		{
			head=NULL;
		}
		singlylinkedlist(Node*n)
		{
			head=n;
		}
		//checks if node exist
		Node*nodeexists(int k)
		{
			Node*temp=NULL;
			Node*ptr=head;
			while(ptr!=NULL)
			{
				if(ptr->key==k)
				temp=ptr;
				ptr=ptr->next;
				return temp;
			}
		}
		//append a node to the list(to end)
		void appendnode(Node*n)
		{
			if(nodeexists(n->key)!=NULL)
			cout<<"node already exist "<<endl;
			else 
			{
				if(head==NULL)
				{
					head=n;
					cout<<"node appended"<<endl;
				}
				else
				{
					Node*ptr=head;
					while(ptr->next!=NULL)
					{
						ptr=ptr->next;
					}
					ptr->next=n;
					cout<<"node appended"<<endl;
				}
			}
		}
		//prepend node(to start)
		void prependnode(Node*n)
		{
			if(nodeexists(n->key)!=NULL)
			cout<<"node already exist"<<endl;
			else 
			{
				n->next=head;
				head=n;
				cout<<"node prepended "<<endl;
			}
		}
		//insert a node after a particular node in the list
		void insert_node_after(int k,Node*n)
		{
			Node*ptr=nodeexists(k);
			if(ptr==NULL)
			cout<<"no node exist with given key "<<k<<endl;
			else 
			{
				if(nodeexists(n->key)!=NULL)
				{
					cout<<"node already exist"<<endl;
				}
				else 
				{
					n->next=ptr->next;
					ptr->next=n;
					cout<<"node inserted"<<endl;
				}
			}
			
		}
		//delete(unlinking) node by key
		void delete_node_by_key(int k)
		{
			if(head==NULL)
			{
				cout<<"empty "<<endl;
			}
			else if(head!=NULL)
			{
				if(head->key=k)
				{
					head=head->next;
					cout<<"node UNLINKED with key value "<<k<<endl;
				}
				else
				{
					Node*temp=NULL;
					Node*prevptr=head;
					Node*currentptr=head->next;
					while(currentptr!=NULL)
					{
						if(currentptr->key==k)
						{
							temp=currentptr;
							currentptr=NULL;
						}
						else
						{
							prevptr=prevptr->next;
							currentptr=currentptr->next;
						}
					}
					if(temp!=NULL)
					{
						prevptr->next=temp->next;
						cout<<"node UNLINKED"<<endl;
					}
					else
					cout<<"node doesn't exist"<<endl;
				}
			}
		}
		//update node
		void update(int k,int d)
		{
			Node*ptr=nodeexists(k);
			if(ptr!=NULL)
			{
				ptr->data=d;
				cout<<"UPDATED"<<endl;
			}
			else
			cout<<"node dosen't exist"<<endl;
		}
		//printing
		void print()
		{
			if(head==NULL)
			{
				cout<<"no nodes is in list"<<endl;
			}
			else
			{
				cout<<"singly linked list values :"<<endl;
				Node*temp=head;
				while(temp!=NULL)
				{
				   cout<<"("<<temp->key<<","<<temp->data<<") -->";
				   temp=temp->next;	
				}
			}
		}

};

int main()
{
	singlylinkedlist s;
	int opt,key1,k1,data1;
	do
	{
		cout<<"what option do you want to perform ?"<<endl;
		cout<<"1.appendnode(Node*n)"<<endl;
		cout<<"2.prependnode(Node*n)"<<endl;
		cout<<"3.insert_node_after(int k,Node*n)"<<endl;
		cout<<"4.delete_node_by_key(int k)"<<endl;
		cout<<"5.update(int k,int d)"<<endl;
		cout<<"6.print()"<<endl;
		cout<<"7.clear screen"<<endl;
		cout<<"0. EXIT"<<endl;
		cin>>opt;
		Node*n1=new Node();
		switch(opt)
		{
			case 0:
			        break;
			        
			case 1:
			cout<<"append node operation enter key and data of the node"<<endl;
			cin>>key1;cin>>data1;
			n1->key=key1;
			n1->data=data1;
			s.appendnode(n1);
			break;
			
			case 2:
			       cout<<"prepend node operation enter key and data of the node to be prepended"<<endl;
				   cin>>key1;cin>>data1;
				   n1->key=key1;
				   n1->data=data1;
				   s.prependnode(n1);
				   break;
				   
			case 3:
			       cout<<"insert node after operation \n enter key of existing node after which you want to insert this new node"<<endl;
				   cin>>k1;
				   cout<<"enter the key and data"<<endl;
				   cin>>key1;cin>>data1;
				   n1->key=key1;
				   n1->data=data1;
				   s.insert_node_after(k1,n1);
				   break;
				   
			case 4:
			     cout<<"delete node by key operation "<<endl;
				 cout<<"enter key of the node to be deleted"<<endl;
				 cin>>k1;
				 s.delete_node_by_key(k1);
				 break;
				 
			case 5:
			     cout<<"update node by key operation"<<endl;
				 cout<<"enter key and new data to be updated"<<endl;
				 cin>>key1;cin>>data1;
				 s.update(key1,data1);
				 break;
				 
			case 6:
			     s.print();
				 break;
				 
			case 7:
			    system("cls");
				break;
			default :
			  cout<<"enter proper option number"<<endl;		 	 	 	     
				         
		}
	}while(opt!=0);
	return 0;
}

