#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int prev=0;
		if(k>(n+1)/2) cout<<"-1"<<endl;
		else{
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(i==j) prev^=1;
					if(i==j and k and prev){
						cout<<"R";
						k-=1;
					}
					else
					  cout<<".";
				}
				cout<<endl;
			}
		}
	}
	return 0;
}
