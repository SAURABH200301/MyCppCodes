#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int num=11,num2=11;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i+j>n-1){
				cout<<num2<<" ";
				num2++;
			}
			else
			  cout<<num+j<<" ";
		}
		num2=11;
		num++;
		cout<<endl;
	}
	return 0;
}
