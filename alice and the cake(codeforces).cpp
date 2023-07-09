#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,sum=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			
		}
		if(n==1){
			cout<<"YES"<<endl;
			continue;
		}
		map<int,int> m;
		for(int i=0;i<n;i++) sum+=a[i],m[a[i]]++;
		priority_queue<int> pq;
		pq.push(sum);
		while(pq.size()<n){
			int x=pq.top();
			pq.pop();
			int p=x/2,q=(x+1)/2;
			if(m.count(p)) m[p]--,n--;
			else pq.push(p);
			if(m[p]==0) m.erase(p);
			if(m.count(q)) m[q]--,n--;
			else pq.push(q);
			if(m[q]==0) m.erase(q);
		}
		if(pq.size()==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
