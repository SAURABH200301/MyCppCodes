#include<bits/stdc++.h>
using namespace std;
int main(){
	int t=1;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int x=0;
		for(int i=31;i>=0;i--){
			if((1<<i)&(n-1)){
				x=i;
				break;
			}
		}
		int xx=pow(2,x);
		for(int i=1;i<xx;i++)cout<<i<<" ";
		cout<<0<<" ";
		for(int i=xx;i<=n-1;i++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}

