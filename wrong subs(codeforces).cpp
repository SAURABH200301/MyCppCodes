#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	while(m>0){
		if(n%10!=0){
			n=n-1;
		}
		else{
			n/=10;
		}
		m--;
	}
	cout<<n<<endl;
	return 0;
}
