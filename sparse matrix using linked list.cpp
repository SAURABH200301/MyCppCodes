#include<iostream>
using namespace std;
class Node
{ 
public:
    int col,val;
	Node* next;	
	Node()
	{
		col=0;
		val=0;
		next=NULL;
	}
	~Node(){
		delete next;
	}
	void create(int m,Node *A)
	{
		cout<<"enter the non zero values"<<endl;
	for(int  i=0;i<m;i++)
	{
		cout<<"enter the value for row "<<i<<endl;
		int k=1;
		Node *q=new Node;
		*q=A[i];
		do
		{
			Node *p=new Node;
			cout<<"enter the column number"<<endl;
			cin>>p->col;
			cout<<"enter the value "<<endl;
			cin>>p->val;
			q->next=p;
			q=q->next;
			//q=p;
			cout<<"inserted"<<endl<<"want to insert more or press 0"<<endl;
			cin>>k;
		}while(k!=0);
	}
	}
	void display(int m,int n,Node *A)
    {
    	for(int i=0;i<m;i++)
    	{
    		Node *p=new Node;
    		*p=A[i];
    		for(int j=0;i<n;j++)
    		{
    			if(j==p->col)
    			{
    				cout<<p->val<<" ";
    				p=p->next;
				}
				else
				cout<<"0 ";
			}
			cout<<endl;
		}
	}
};
int main()
{
	int m,n;
	Node obj;
	cout<<"enter the dimension of the matrix"<<endl;
	cin>>m>>n;
	Node *A=new Node[m];
	obj.create(m,A);
	obj.display(m,n,A);
	return 0;
	
}
