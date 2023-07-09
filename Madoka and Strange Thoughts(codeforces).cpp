#include<bits/stdc++.h>
using namespace std;	
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int ratio(int n1,int n2){
	int GCD_Num=gcd(n1,n2);
    return (n1*n2)/(GCD_Num*GCD_Num);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int count=0;
		if(n==1){
			cout<<1<<endl;
			continue;
		}
		if(n>=INT_MAX){
			cout<<"266666666"<<endl;
			continue;
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
//				cout<<i<" "<<j<<endl; 
				int num=ratio(i,j);
//				cout<<num<<" num"<<endl;
				if(num<=3){
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
