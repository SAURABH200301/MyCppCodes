#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		  cin>>a[i];
		
		sort(a,a+n);
		if(a[n-1]==a[n-2])
		  cout<<"fight:("<<endl;
		else
		  cout<<"peace:)"<<endl;
	}
	return 0;
}
