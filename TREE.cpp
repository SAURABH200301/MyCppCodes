#include<iostream>  
#define SPACE 5          //tree
using namespace std;
class treenode                        //NODE CLASS OF TREE
{
	public:
		int value;
		treenode *left;
		treenode *right;
		treenode()
		{
			left=NULL;right=NULL;
			value=0;
		}
		treenode(int v)
		{
			value=v;right=NULL;left=NULL;
		}
};
class BST                   //BINARY SEARCH TREE CLASS
{
	public:
     treenode* root;
     BST()
     {
     	root==NULL;
	 }
     treenode *deletenode(treenode *r,int v)        //DELETE NODE
	{
		if(r==NULL)
		   return r;
	    else if(v<r->value)
	       r->left=deletenode(r->left,v);
	    else if(v>r->value)
	       r->right=deletenode(r->right,v);
	    else if(r->left==NULL)
	    	{
	    		treenode *temp=r->right;
	    		delete r;
	    		return temp;
			}
	    else if(r->right==NULL)
	    {
	    	treenode *temp=r->left;
	    		delete r;
	    		return temp;
		}
		else
		 {
		 	treenode *temp=minvaluenode(r->right);
		 	r->value=temp->value;
		 	r->right=deletenode(r->right,temp->value);
		 }
		 return r;
		
	}
	 bool isempty()
	{
        if(root==NULL)
		  return true;
	    else 
		  return false;	 	
	}
	void insertnode(treenode * new_node) 
	{
    if (root == NULL) {
      root = new_node;
      cout << "Value Inserted as root node!" << endl;
    } else {
      treenode * temp = root;
      while (temp != NULL) {
        if (new_node -> value == temp -> value) {
          cout << "Value Already exist," <<
            "Insert another value!" << endl;
          return;
        } else if ((new_node -> value < temp -> value) && (temp -> left == NULL)) {
          temp -> left = new_node;
          cout << "Value Inserted to the left!" << endl;
          break;
        } else if (new_node -> value < temp -> value) {
          temp = temp -> left;
        } else if ((new_node -> value > temp -> value) && (temp -> right == NULL)) {
          temp -> right = new_node;
          cout << "Value Inserted to the right!" << endl;
          break;
        } else {
          temp = temp -> right;
        }
      }
    }
  }	
	/*void insertnode(treenode *n)             //insertion
	{
		if(root==NULL)
		{
			root=n;
			cout<<"value inserted as root !"<<endl;
		}
		else
		{
			treenode *temp=root;
			while(temp!=NULL)
			{
				if(temp->value==n->value)
				{
					cout<<"node already exist"<<endl;
					return;
				}
				else if((n->value<temp->value)&&(temp->left==NULL))
				{
					temp->left=n;
					cout<<"value inserted!"<<endl;
					break;
				}
				else if(n->value<temp->value)
				{
					temp=temp->left;
				}
				else if((n->value<temp->value)&&(temp->right==NULL))
				{
					temp->right=n;
					cout<<"value inserted!"<<endl;
					break;
				}
				else
				{
					temp=temp->right;
				}
			}
		}
	}*/
    void printpreorder(treenode *r)       //NODE LEFT RIGHT
	{
		if(r==NULL)
		  return;
		  cout<<r->value<<" ";
		  printpreorder(r->left);
		  printpreorder(r->right);
	}
	void printinorder(treenode *r)        //LEFT NODE RIGHT
	{
		if(r==NULL)
		  return;
		  printinorder(r->left);
		  cout<<r->value<<" ";
		  printinorder(r->right);
		  
	}	
	void printpostorder(treenode *r)      //LEFT RIGHT NODE
	{
		if(r==NULL)
		  return;
		  printpostorder(r->left);
		  printpostorder(r->right);
		  cout<<r->value<<" ";
		  
	}	
	void print2D(treenode *r,int space)
	{
		if(r==NULL) return;
		space+=SPACE;
		print2D(r->right,space);
		cout<<endl;
		cout<<r->right<<"\n";
		print2D(r->left,space);
	}
	treenode *iterativesearch(int val)     //ITERATIVE SEARCH
	{
		if(root==NULL)
		{
			return root;
		}
		else
		{
			treenode *temp=root;
			while(temp!=NULL)
			{
				if(val==temp->value)
				return temp;
				else if(val<temp->value)
				 temp=temp->left;
				else 
				  temp=temp->right;
			}
			return NULL;
		}
   }
	int height(treenode *r)    //HEIGHT OF TREE
	{
			if(r==NULL)
			return -1;
			else
			{
				int lheight=height(r->left);
				int rheight=height(r->right);
				if(lheight>rheight)
				  return lheight+1;
				else
				  return rheight+1;
			}
	}
	void printgivenlevel(treenode *r,int l) //PRINT LEVELWISE 
	{
		if(r==NULL)
		return ;
		else if(l==0)
		  cout<<r->value<<" ";
		else
		 {
		 	printgivenlevel(r->left,l-1);
		 	printgivenlevel(r->right,l-1);
		 }
	}
	void printlevelorderBFS(treenode *r)    //SEARCH IN BREATH FIRST SEARCH
	{
		int h=height(r);
		for(int i=0;i<h;i++)
		{
			printgivenlevel(r,i);
		}
	}	
	treenode* minvaluenode(treenode*n)    //RETURNS MIN VALUE
	{
		treenode *current=n;
		while(current->left!=NULL)
		   current=current->left;
		return current;   
	}
	
	
};
int main()
{
	BST l;
	int opt,val;
	do
	{
	cout<<endl<<"WELCOME TO TREE DATA STRUCTURE"<<endl;
	cout<<"CHOOSE OPTION BELOW TO PERFORM OPRATIONS. 0 FOR EXIT"<<endl;
	cout<<"1. INSERT"<<endl;
	cout<<"2. IS EMPTY"<<endl;
	cout<<"3. PRINT THE TREE"<<endl;
	cout<<"4. SEARCH"<<endl;
	cout<<"5. DELETE "<<endl;
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
		        new_node->value=val;
		        l.insertnode(new_node);
		        cout<<endl;
		        break;
		case 2: if(l.isempty())
		          cout<<"TREE IS EMPTY"<<endl;
		          else
		          cout<<"TREE IS NOT EMPTY"<<endl;
		          break;
		case 3: cout<<"PRINT FUNCTION IS CALLED"<<endl;
		        cout<<"SELECT WHAT TYPE OF PRINTING DO YOU WANT"<<endl;
		        int op;
		        cout<<"1.PRE ORDER"<<endl;
                cout<<"2.IN ORDER"<<endl;
				cout<<"3.POST ORDER"<<endl;
				cout<<"4. PRINT IN 2D"<<endl;
				cout<<"5.PRINT IN BFS FORM"<<endl;		        
				cin>>op;
				if(l.isempty())
				 cout<<"TREE IS EMPTY"<<endl;
				else
				switch(op)
				{
					case 1:l.printpreorder(l.root);
					break;
					case 2:l.printinorder(l.root);
					break;
					case 3:l.printpostorder(l.root);
					break;
					case 4:l.print2D(l.root,5);
				    break;
				    case 5:l.printlevelorderBFS(l.root);
				    break;
				    default :cout<<"CHOOSE APROPRIATE NUMBER"<<endl;
				}
				break;
		case 4: cout<<"SEARCH FUNCTION IS CALLED"<<endl;
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
				  break;
		case 6: cout<<"HEIGHT OF TREE IS:"<<l.height(l.root);
		         break;
		case 7: system("cls");
		         break;
		default :
			cout<<"ENTER VALID NUMBER"<<endl;break;
	}
}while(opt!=0);
	
	return 0;
}

