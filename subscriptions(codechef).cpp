#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		if(n<6){
			cout<<m<<endl;
		}
		else if(n%6==0){
			cout<<(n/6)*m<<endl;
		}else{
		   cout<<(n/6+1)*m<<endl;	
		}
	}

	return 0;
}
