#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,num,count=0,sum=0;
		cin>>n>>num;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		for(int i=0;i<n;i++){
			int a=arr[i]+num;
			if(a>sum-arr[i]){
				count++;
			}
		}
		cout<<count<<endl;
	}
}
