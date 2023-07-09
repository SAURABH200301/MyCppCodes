#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int f=0,n;
		cin>>n;
		int a[n];
		a[0]=1;
		for(int i=1;i<n;i++){
			a[i]=a[i-1]*3;
			if(a[i]>pow(10,9)){
				f=1;
				break;
			}
		}
		if(f==1)
		  cout<<"NO"<<endl;
		else{
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++)
			  cout<<a[i]<<" ";
			  cout<<endl;
		}
	}
	return 0;
}
