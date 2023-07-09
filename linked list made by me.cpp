#include<bits/stdc++.h>
using namespace std;
class node
{
     public:
	 //int key;
	 int data;
	 node *next;
	 node()
	 {
	 	data=0;
	 	next=NULL;
	 }
	 node(int d)
	 {
	 	data=d;
	 	next=NULL;
	 }
};
class singlylinkedlist
{
	public:
		node *head;
	singlylinkedlist()
	{
		head=NULL;
	}
	singlylinkedlist(node *n)
	{
		head=n;
	}
	bool isempty()
	{
		return (head==NULL)?true:false;
	}
	void appendd(int d)
	{
		node *n=new node;
		n->data=d;
		if(isempty())
		{
			head=n;
			cout<<"node appended as head"<<endl;
		}
		else{
			node* ptr= head;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=n;
			cout<<"node appended at the end"<<endl;
		}
	}
	void prepend(int d)
	{
		node *n;n->data=d;
		if(isempty())
		{
			head=n;
			cout<<"node inserted"<<endl;
		}
		else
		{
		n->next=head;
		head=n;
		cout<<"node prepended"<<endl;
	    }
	}
	void insertNodeAtSpecific(int d,int aft)  //this function inserts data after the data specify by the user
	{
		node *n;n->data=d;
		
		while(!isempty())
		{
			node* ptr=head;
			if(ptr->data==aft)
			{
				n->next=ptr->next;
				ptr->next=n;
				cout<<"inserted"<<endl;
			}
			ptr=ptr->next;
		}
	}
	int deleteNode(int d)
	{
	    if(isempty())
		{
			cout<<"list is empty"<<endl;
		}
		else
		{
			while(head!=NULL)
			{
				if(head->data==d)
				{
					node* n=head;
					head=head->next;
					return d;
				}
				head=head->next;
			}
			cout<<"data not found"<<endl;
		}
	}
	void update(int d,int n)
	{
		if(isempty())
		cout<<"list is empty"<<endl;
		else
		{
			while(head!=NULL)
			{
				if(head->data=d)
				{
					head->data=n;
					cout<<"updated"<<endl;
				}
			}
			cout<<"data not found"<<endl;
		}
	}
	void display()
	{
		if(isempty())
		  cout<<"list is empty"<<endl;
		else
		{
			node * ptr=head;
			while(ptr!=NULL)
			{
				cout<<ptr->data<<" ";
				ptr=ptr->next;
			}
		}
	}
};
int main()
{
	singlylinkedlist obj;
	int opt,d,p;
	do{
	
	cout<<"THIS LINKED LIST IS MADE BY ME"<<endl;
	cout<<"choose the options to perform. 0 to exit"<<endl;
	cout<<"1. APPENDING IN THE STARTING"<<endl;
	cout<<"2. PREPENDING IN THE END"<<endl;
	cout<<"3. insertNodeAtSpecific"<<endl;
	cout<<"4. DELETE A NODE "<<endl;
	cout<<"5. UPDATE NODE"<<endl;
	cout<<"6. empty??"<<endl;
	cout<<"7. display"<<endl;
	cout<<"8. clear screen"<<endl;
	cout<<"0. to exit"<<endl;
	
	cin>>opt;
	node *n=new node;
	switch(opt)
	{
		case 0: cout<<"THANK YOU FOR VISITING"<<endl;
		        break;
		case 1: cout<<"Append node operation is called \n  Enter the data"<<endl;
		        cin>>d;
		        obj.appendd(d);
		        break;
	    case 2: cout<<"Prepend node operation is called \n  Enter the data"<<endl;
	            cin>>d;
	            obj.prepend(d);
	            break;
	    case 3: cout<<"insertNodeAtSpecific(int d,int aft,node* head)"<<endl;
	            cout<<"Enter the data to be entered and data after which it is to be inserted"<<endl;
	            cin>>d>>p;
	            obj.insertNodeAtSpecific(d,p);
	            break;
	    case 4: cout<<"Delete node operation"<<endl;
	            cout<<"DeleteNode(int d,node *head)"<<endl;
	            cout<<"Enter the number element to be deleted"<<endl;
	            cin>>d;
	            obj.deleteNode(d);
	            break;
	    case 5: cout<<"Update(int d,int n,node *h)"<<endl;
	            cout<<"Enter the element to be updated and new element"<<endl;
	            cin>>d>>p;
	            obj.update(d,p);
	            break;
	    case 6: if(obj.isempty())
	              cout<<"Empty"<<endl;
	            else
	            cout<<"Not Empty"<<endl;
	            break;
	    case 7: cout<<"Linked List is"<<endl;
	            obj.display();
	            break;
	    case 8: system("cls");
	            break;
	}
    }while(opt!=0);
	return 0;
}
