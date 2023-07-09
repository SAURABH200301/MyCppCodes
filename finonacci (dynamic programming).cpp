#include<bits/stdc++.h>
using namespace std;
int fibo_helper(int *ans,int n){
	if(n<=1) return n;
	//check if output alreday exists
	if(ans[n]!=-1) return ans[n];
	int a=fibo_helper(ans,n-1);
	int b=fibo_helper(ans,n-2);
	//save the output for future use
	ans[n]=a+b;
	//return the final output
	return ans[n];
}
void fibo(int n){
	int *ans=new int[n+1];
	for(int i=0;i<n+1;i++)
	  ans[i]=-1;
	cout<<fibo_helper(ans,n);
}
int main(){
	int n;
	cin>>n;
	fibo(n);
	return 0;
}
