#include<iostream>
#define GLOBALSPACE 5
using namespace std;
class treenode
{
	private:
	int value;
	treenode *left;
	treenode *right;
	public:
		treenode()
		{
			value=0;left=NULL;right=NULL;
		}
		treenode(int v)
		{
			value=v;left=NULL;right=NULL;
		}
	int getvalue()
	{
		return value;
	}
	void setvalue(int v)
	{
		value=v;
	}
	treenode *getleft()
	{
		return left;
	}
	treenode *getright()
	{
		return right;
	}
	void setleft(treenode *n)
	{
		left=n;
	}
	void setright(treenode *n)
	{
		right=n;
	}
};
class AVL
{
	private:
		treenode *root;
	public:
		AVL()
		{
			root=NULL;
		}
		treenode *getroot()
		{
			return root;
		}
		void setroot(treenode *r)
		{
			root=r;
		}
		bool isempty()
		{
			if(root==NULL)
			  return true;
			else
			   return false;
		}
		int height(treenode *r)
		{
			if(r==NULL)
			 return -1;
			else
			{
				int lheight=height(r->getleft());
				int rheight=height(r->getright());
				if(lheight>rheight)
				   return (lheight+1);
				else
				   return(rheight+1);
			}
		}
		int getbalancefactor(treenode *n)
		{
			if(n==NULL)
			{
				return -1;
			}
			else
			 return (height(n->getleft())-height(n->getright()));
		}
		treenode *rightrotate(treenode *y)
		{
			treenode *x=y->getleft();
			treenode *t2=x->getright();
			x->setright(y);
			y->setleft(t2);
			return x;
		}
		treenode *leftrotate(treenode *x)
		{
			treenode *y=x->getright();
			treenode *t2=y->getleft();
			y->setleft(x);
			x->setright(t2);
			return y;
		}
		treenode *insert_AVL(treenode *r,treenode *ne_node)
		{
			if(r==NULL)
			{
				r=ne_node;
				return r;
			}
			if(ne_node->getvalue()<r->getvalue())
		    	r->setleft(insert_AVL(r->getleft(),ne_node));
			else if(ne_node->getvalue()>r->getvalue())
			    r->setright(insert_AVL(r->getright(),ne_node));
			else
			  {
			  	cout<<"NO DUPLICATES"<<endl;
			  }
			
			int bf=getbalancefactor(r);
			cout<<bf<<" hoee"<<endl;
			if(bf>1 &&((ne_node->getvalue())<(r->getleft()->getvalue())))
			     return rightrotate(r);
			if(bf<-1 && ((ne_node->getvalue())>(r->getright()->getvalue())))
			     return leftrotate(r);
			if(bf>1 &&((ne_node->getvalue())>(r->getleft()->getvalue())))
			      {
			      	r->setleft(leftrotate(r->getleft()));
			      	return rightrotate(r);
				  }
			if(bf<-1 &&((ne_node->getvalue())>(r->getright()->getvalue())))
			      {
			      	r->setright(rightrotate(r->getright()));
			      	return leftrotate(r);
				  }
			return r;
		}
		
		void print2D(treenode* r,int space)
		{
			if(r==NULL)
			 return ;
			space+=GLOBALSPACE;
			print2D(r->getright(),space);
			cout<<endl;
			for(int i=GLOBALSPACE;i<space;i++)
			{
				cout<<" ";
			}
			cout<<r->getvalue();cout<<endl;
			print2D(r->getleft(),space);
		}
};

int main()
{
	AVL l;
	int opt,val;
	do
	{
	cout<<endl<<"WELCOME TO AVL TREE DATA STRUCTURE"<<endl;
	cout<<"CHOOSE OPTION BELOW TO PERFORM OPRATIONS. 0 FOR EXIT"<<endl;
	cout<<"1. INSERT"<<endl;
	cout<<"2. IS EMPTY"<<endl;
	cout<<"3. PRINT THE TREE"<<endl;
	cout<<"4. SEARCH(NOT IN WORKING)"<<endl;
	cout<<"5. DELETE(NOT IN WORKING) "<<endl;
	cout<<"6. HEIGHT "<<endl;
	cout<<"7. CLEAR SCREEN"<<endl;
	cin>>opt;
	treenode * new_node= new treenode();
	switch(opt)
	{
		case 0: break;
		case 1: cout<<"INSERT FUNCTION IS CALLED"<<endl;
		        cout<<"Enter the value "<<endl;
		        cin>>val;
		        new_node->setvalue(val);
		        l.insert_AVL(l.getroot(),new_node);
		        cout<<endl;
		        break;
		case 2: if(l.isempty())
		          cout<<"TREE IS EMPTY"<<endl;
		          else
		          cout<<"TREE IS NOT EMPTY"<<endl;
		          break;
		case 3: cout<<"PRINT FUNCTION IS CALLED"<<endl;
		        
				if(l.isempty())
				 cout<<"TREE IS EMPTY"<<endl;
				else
				   l.print2D(l.getroot(),5);
				break;
		/*case 4: cout<<"SEARCH FUNCTION IS CALLED"<<endl;
		        cout<<"Enter the value to search in tree"<<endl;
		        cin>>val;
		        new_node=l.iterativesearch(val);
		        if(new_node==NULL)
		          cout<<"VALUE IS NOT FOUND IN THE TREE"<<endl;
		        else
		        {
		        	cout<<"VALUE FOUND"<<endl;
				}
				break;
		case 5: cout<<"DELETE FUNCTION IS CALLED"<<endl;
		        cout<<"Enter the value you want to delete"<<endl;
		        cin>>val;
		        new_node=l.deletenode(l.root,val);
		        if(new_node==NULL)
		          cout<<"VALUE NOT FOUND"<<endl;
		        else
		          {
		          	cout<<"VALUE DELETED IS :"<<new_node->value<<endl;
				  }
				  break;*/
		case 6: cout<<"HEIGHT OF TREE IS:"<<l.height(l.getroot());
		         break;
		case 7: system("cls");
		         break;
		default :
			cout<<"ENTER VALID NUMBER"<<endl;break;
	}
}while(opt!=0);
	
	return 0;
}
