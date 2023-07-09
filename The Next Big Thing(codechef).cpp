#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int m=a[i];
		bool t=true;
		for(int j=i+1;j<n;j++){
			if(m<a[j]){
			  m=a[j];
			  cout<<m<<" ";
			  t=false;
			  break;
			  
			}
		
		}
		if(t)
		    cout<<-1<<" ";
		
	}
	return 0;
}
