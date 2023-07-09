#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int M,x,y;
		int cops[101]={0};
		cin>>M>>x>>y;
		for(int i=0;i<M;i++)
		   cin>>cops[i];
		   int dist =x*y;
		   int count=0;
		   for(int i=1;i<=100;i++){
		   	bool safe = true;
		   	for(int j=0;j<M;j++){
		   		int leftRange=max(cops[j]-dist,1);
		   		int rightRange = min(cops[j]+dist,100);
		   		if(i>= leftRange && i<= rightRange)
		   		   safe = false;
			   }
			   if(safe)
			     count++;
		   }
		   cout<<count<<endl;
	}
	return 0;
}
