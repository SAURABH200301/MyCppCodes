#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a==0 or(a==0 and b==0))
		  cout<<"1"<<endl;
		else if(b==0)
		  cout<<a+1<<endl;
		else{
			cout<<a+b*2+1<<endl;
		}
	}
	return 0;
}
