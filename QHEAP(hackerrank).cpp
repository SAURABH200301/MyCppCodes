#include<bits/stdc++.h>
using namespace std;
void deletee(priority_queue<int,vector<int>,greater<int>> p,priority_queue<int,vector<int>,greater<int>> q,int m){
	 while(!p.empty()){
	 	if(p.top()!=m){
	 		q.push(p.top());
	 		p.pop();
		 }
	 }
	 p=q;
	 while(!q.empty()){
	 	 q.pop();
	 }
}
int main(){
	int t;
	cin>>t;
	while(t--){
		priority_queue<int,vector<int>,greater<int>> p,q;
		int n;
		cin>>n;
		switch(n){
			case 1: int m;
			cin>>m;
			p.push(m);
			break;
			
			case 2: int m;
			       cin>>m;
			       deletee(p,q,m);
			       break;
		    case 3:
		    	  cout<<p.top();
		}
	}
	return 0;
}
