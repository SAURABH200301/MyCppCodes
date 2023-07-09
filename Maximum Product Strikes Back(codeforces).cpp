#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,mul=1,temp=1,t=1,m=1;
		bool tr=true;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			temp*=a[i];
			if(temp==0)
			   temp=1;
			if(temp>mul)
			  mul=temp;
		}
		if(mul==1){
			cout<<n<<" 0"<<endl;
			continue;
		}
		temp=1;
		int f=0,e=0;
		for(int i=0;i<n;i++){
			temp*=a[i];
			if(temp==0){
				temp=1;
				f=i+1;
			}
			if(temp==mul){
				temp=1;
				e=n-i-1;
			}
		}
		
		cout<<f<<" "<<e<<endl;
	}
	return 0;
}
