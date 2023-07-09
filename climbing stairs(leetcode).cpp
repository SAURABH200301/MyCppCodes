#include<bits/stdc++.h>
using namespace std;
//int climbStairs1(int n,int num){
//	if(num>n)
//	  return 0;
//	if(num==n)
//	  return 1;
//	int n1= climbStairs1(n,num+1);
//	int n2= climbStairs1(n,num+2);
//	return n1+n2;
//}
//int climbStairs(int n){
//    return climbStairs1(n,0);
//    
//}
int climbStairs(int n){
	int one=1,two =1;
	for(int i=0;i<n-1;i++){
		int temp=one;
		one=one+two;
		two=temp;
	}
	return one;
}
int main(){
	int n;
	cin>>n;
	cout<<climbStairs(n);
	return 0;
}
