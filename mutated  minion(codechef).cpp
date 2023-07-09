#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,num,count=0;
		cin>>n>>num;
		int arr[n];
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
			arr[i]+=num;
			if(arr[i]%7==0){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
