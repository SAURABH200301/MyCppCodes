#include<bits/stdc++.h>
using namespace std;
int left_arr[1024],right_arr[1024];
void swapping(int root,int k){
	//queue
	//level --to check current level
	//count ==n of count of nodes in a level
	queue<int> q;
	q.push(root);
	
	int level=0;
	while(!q.empty()){
		level++;
		
		int count=q.size();
		while(count--){
			//first visit node
		    //left is null
		    //right is null
		    //swapping
		    int p=q.front();
		    q.pop();
		    
		    //swapping
		    if(level%k==0){
		    	swap(left_arr[p],right_arr[p]);
			}
		    
		    if(left_arr[p]!=-1){
		    	q.push(left_arr[p]);
			}
			if(right_arr[p]!=-1){
				q.push(right_arr[p]);
			}
			
		}
	}
}

void inorder(int root){
	if(root==-1) return;
	
	inorder(left_arr[root]);
	cout<<root<<" ";
	inorder(right_arr[root]);
	
}
int main(){
	int n,a,b;

	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		left_arr[i]=a;
		right_arr[i]=b;
	}
	int t;
	cin>>t;
	while(t--){
		int k;cin>>k; //for multiple pf k
		//tree creation swapping
		swapping(1,k); 
		//printing inorder
		inorder(1);
		cout<<endl;
	}
	return 0;
}
