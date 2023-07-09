#include<bits/stdc++.h>
using namespace std;
bool funInc(int a[],int n){
	for(int i=1;i<n;i++){
		if(a[i-1]>a[i])
		  return false;
	}
	return true;
}
bool funDec(int a[],int n){
	for(int i=1;i<n;i++){
		if(a[i-1]<a[i])
		  return false;
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	  cin>>a[i];
    bool inc = funInc(a,n);
    bool dec = funDec(a,n);
    if(inc || dec)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
	return 0;
}
