#include<bits/stdc++.h>
#include<queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInputLevelWise(){
	int rootdata;
	cout<<"enter data"<<endl;
	cin>>rootdata;
	 TreeNode<int>* root=new TreeNode<int>(rootdata);
	 
	 queue<TreeNode<int>*> pendingNodes;
	 
	 pendingNodes.push(root);
	 while(pendingNodes.size()!=0)
	 {
	 	TreeNode<int>* front=pendingNodes.front();
	 	pendingNodes.pop();
	 	cout<<"Enter num of children of "<<front->data<<endl;
	 	int numChild;
	 	cin>>numChild;
	 	for(int i=0;i<numChild;i++)
	 	{
	 		int childData;
	 		cout<<"Enter "<<i<<" ith child of "<<front->data<<endl;
	 		cin>>childData;
	 		TreeNode<int>* child=new TreeNode<int>(childData);
	 		front->children.push_back(child);
	 		pendingNodes.push(child);
		 }
	 }return root;
}

TreeNode<int>* takeInput()
{
	int rootdata;
	cout<<"enter data"<<endl;
	cin>>rootdata;
	 TreeNode<int>* root=new TreeNode<int>(rootdata);
	 
	 int n;
	 cout<<"enter the num of children of"<<rootdata<<endl;
	 cin>>n;
	 for(int i=0;i<n;i++)
	 {
	 TreeNode<int>* child=takeInput();
	 root->children.push_back(child);
     }
     return root;
}

void printTree(TreeNode<int>* root){
	
	if(root==NULL)
	 return;
	 
	cout<<root->data<<":"; 
	for(int i=0;i<root->children.size();i++)
	{
		cout<<root->children[i]->data<<",";
	}
	cout<<endl;
	for(int i=0;i<root->children.size();i++)
	{
		printTree(root->children[i]);
	}
}

void printAtLevelK(TreeNode<int>* root,int K)
{
	if(root==NULL)
	  return;
	if(K==0)
	{
		cout<<root->data<<endl;
		return;
	}
	for(int i=0;i<root->children.size();i++)
	{
		printAtLevelK(root->children[i],K-1);
	}
}
int numNodes(TreeNode<int>* root)
{
	int ans=1;
	for(int i=0;i<root->children.size();i++)
	{
		ans+=numNodes(root->children[i]);
	}
	return ans;
}
//void printTreeLevelWise(TreeNode<int>* root){
//	
//	 
//	 queue<TreeNode<int>*> pendingNodes;
//	 
//	 pendingNodes.push(root);
//	 while(pendingNodes.size()!=0)
//	 {
//	 	TreeNode<int>* front=pendingNodes.front();
//	 	pendingNodes.pop();
//	 	cout<<front->data<<":";
//	 	for(int i=0;i<root->children.size();i++)
//	 	{
//	 	    cout<<root->children[i]->data<<" ";
//	 		front->children.push_back(root->children[i]);
//	 		pendingNodes.push(root->children[i]);
//		 }
//		 cout<<endl;
//	 }
//}
int leafnodes(TreeNode<int>* root)
{
    int sum=0;
	  if(root==NULL)
	  return 0;
	  if(root->children.size()==0)
	    return 1;
	  for(int i=0;i<root->children.size();i++)
	  {
	  	sum+=leafnodes(root->children[i]);
	  }
	  return sum;
}
void preorderprint(TreeNode<int>* root){
	if(root==NULL)
	return;
	cout<<root->data<<" ";
	for(int i=0;i<root->children.size();i++)
	{
		preorderprint(root->children[i]);
	}
}
void postorderprint(TreeNode<int>* root){
	if(root==NULL)
	return;
	for(int i=0;i<root->children.size();i++)
	{
		preorderprint(root->children[i]);
	}
	cout<<root->data<<" ";

}
//void deleteTree(TreeNode<int>* root)
//{
//	for(int i=0;i<root->children.size();i++)
//	{
//		deleteTree(root->children[i]);
//	}
//	delete root;
//}
int main()
{
//   TreeNode<int>* root=new TreeNode<int>(1);
//   TreeNode<int>* node1=new TreeNode<int>(2);
//   TreeNode<int>* node2=new TreeNode<int>(3);
//   root->children.push_back(node1); 	
//   root->children.push_back(node2); 
//     TreeNode<int>* root=takeInput();
         TreeNode<int>* root=takeInputLevelWise();
//         printTreeLevelWise(root);
     printTree(root);
     cout<<endl;
     cout<<"number fo nodes is :"<<numNodes(root);
     cout<<endl<<"leaf nodes:"<<leafnodes(root)<<endl;
     preorderprint(root);cout<<endl;
     postorderprint(root);cout<<endl;
     cout<<endl<<"Enter the depth value at which you want to print"<<endl;
     int k;cin>>k;
     printAtLevelK(root,k);
//     deleteTree(root);
     delete root; //using destructor
   return 0;	
}
