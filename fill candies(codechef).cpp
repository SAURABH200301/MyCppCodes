#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int i,j;
		cin>>i>>j;
		int a,b;
		a=i%2,b=j%2;
		long long int res= b*i+a*j;
		if(a and b) res--;
		cout<<res<<endl; 
	}
	return 0;
}

