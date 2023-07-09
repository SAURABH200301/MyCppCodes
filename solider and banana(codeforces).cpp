#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,n,w;
	cin>>k>>n>>w;
	int i= (w*(w+1))/2;
	int u=i*k-n;
	if(u<0)
	  cout<<0;
	else
	  cout<<u;
	return 0;
}
