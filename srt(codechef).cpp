#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,c=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(is_sorted(a,a+n))
		{
			cout<<c<<endl;
		}
		else 
		{
		for(int i=0;i<n;i++){
			int ind;
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]){
//					min=a[j];
					ind=j;
				}
			}
			if(i!=ind)
			  c++;
			int temp=a[ind];
			a[ind]=a[i];
			a[i]=temp;
			
		}
		cout<<c<<endl;
	}
	}
	return 0;
}
