#include<iostream>
using namespace std;            //QUEUE USING LINKED LIST
class Node
{
	public:
		int key,data;Node*next;
		Node()                //default construtor
		{
			key=0;data=0;next=NULL;
		}
		Node(int k,int d)      //parametrise construtor
		{
			key=k;data=d;next=NULL;
		}
};
class Queuee
{
	public:
		Node*front;Node*rear;
		Queuee()                 //default construtor
		{
			front=NULL;rear=NULL;
		}
		bool isempty()           //to check queue empty or not
		{
			if(front==NULL&&rear==NULL)
			  return true;
			else
			  return false;
		}
		bool checkifnodeexist(Node*n)        //function to check is node exist
		{
			Node*temp=front;
			bool exist=false;
			while(temp!=NULL)
			{
				if(n->key==temp->key)
				{
					exist=true;break;
				}
				temp=temp->next;
			}
			return exist;
		}
		void enqueue(Node*n)         //to enter the element in the queue
		{
			if(isempty())                  //first element in queue
			{
				front=n;rear=n;
			}
			else if(checkifnodeexist(n))
			       cout<<"NODE ALREADY PRESENT IN THE QUEUE TRY ANOTHER ONE"<<endl;
			else
			{
				rear->next=n;           //putting new node in the position of rear 
				rear=n;                 //making pointing rear pointer to point the node n as rear
				cout<<"NODE ENQUEUED"<<endl;
			}
		}
		Node* dequeue()                //function to delete node
        {
			Node*temp=NULL;
			if(front==NULL&&rear==NULL)
			  {
			  cout<<"UNDERFLOW"<<endl;
			  return temp;
		      }
			else if(front==rear)
			{
				temp=front;
				front=NULL;rear=NULL;
				return temp;
			}
			else
			{
				temp=front;
				front=front->next;
				return temp;
			}
		}
		int count()
		{
			Node*temp=front;int count=0;
			while(temp!=NULL)
			{
				count++;
				temp=temp->next;
			}
			return count;
		}
		void display()
		{
			if(isempty())
			{
				cout<<"QUEUE IS EMPTY"<<endl;
			}
			else
			{
				cout<<"ALL VALUES IN THE QUEUE ARE:"<<endl;
				Node*temp=front;
				while(temp!=NULL)
				{
					cout<<"(key "<<temp->key<<"),(data "<<temp->data<<") ->";
					temp=temp->next;
				}
				cout<<endl;
			}
		}
		void update(int d,int k)
		{
			int c=0;
			Node*temp=front;
			while(temp!=NULL)
	       {
			if(temp->key==k)
			{
				temp->data=d;
				cout<<"UPDATED"<<endl;c++;
			}
		    }
			if(c==0)
			cout<<"NO NODE EXIST WITH THIS KEY"<<endl;
		}
};
int main()
{
	system("cls");
	int d,k,opt;Queuee q;
	do
	{
	cout<<"THIS PROGRAM FOR QUEUE DATA STURCTURE USING LINKED LIST"<<endl;
	cout<<"ENTER THE OPTION TO PERFORM THE OPERATION. 0 TO EXIT"<<endl;
	cout<<"1.ENQUEUE()"<<endl;
    cout<<"2.DEQUEUE()"<<endl;
	cout<<"3.ISEMPTY()"<<endl;
	cout<<"4.COUNT()"<<endl;
	cout<<"5.UPDATE()"<<endl;
	cout<<"6.DISPLAY()"<<endl;
	cout<<"7.TO CLEAR SCREEN"<<endl;
	cout<<"0.EXIT"<<endl;
	Node *new_node= new Node();
	cin>>opt;
	switch(opt)
	{
		case 0: break;
		case 1: cout<<"ENTER THE DATA AND KEY"<<endl;
	            cin>>d>>k;
	            new_node->data=d;
	            new_node->key=k;
	            q.enqueue(new_node);
	            break;
	    case 2: cout<<"DEQUEUE FUNCTION IS CALLED"<<endl;
	            new_node=q.dequeue();
	            cout<<"deleted node data is:"<<new_node->data<<" key is:"<<new_node->key<<endl;
	            break;
	    case 3: cout<<"ISEMPTY FUNCTION CALLED"<<endl;
	            if(q.isempty())
	            {
	            	cout<<"QUEUE IS EMPTY"<<endl;
				}
				else
				cout<<"QUEUE IS NOT EMPTY"<<endl;
				break;
		case 4: cout<<"COUNT FUNCTION IS CALLED"<<endl;
		        cout<<"TOTAL NUMBER/S ARE IN QUEUE IS: "<<q.count()<<endl;
		        break;
		case 5: cout<<"UPDATE FUNCTION IS CALLED"<<endl;
		        cout<<"ENTER THE DATA AND KEY TO BE UPDATED"<<endl;
		        cin>>d>>k;
		        q.update(d,k);
		        break;
		case 6: cout<<"DISPLAY FUNCTION IS CALLED"<<endl;
		        q.display();
		        break;
		case 7: system("cls");
		break;
	    default : cout<<"ENTER VALID NUMBER"<<endl;
	
	}
    }while(opt!=0);
	return 0;	
}
