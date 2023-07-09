#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int a,b,n;
	cin>>a>>b>>n;
	  for(int i=0;i<n;i++){
		int num=a;
		for(int j=0;j<=i;j++){
			num+=pow(2,j)*b;
		}
		cout<<num<<" ";
	  }
    }
	return 0;
}
