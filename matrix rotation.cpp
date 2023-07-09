#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		vector<vector<int>> arr;
		for(int i=0;i<2;i++){
			vector<int> v;
			for(int j=0;j<2;j++){
				int a;cin>>a;
				v.push_back(a);
			}
			arr.push_back(v);
		}
		if(arr[0][0]<arr[1][1]){
			if(arr[0][0]<arr[0][1]and arr[0][0]<arr[1][0] and arr[1][0]<arr[1][1] and arr[0][1]<arr[1][1]){
				cout<<"YES"<<endl;
			}
		}else if(arr[0][0]>arr[1][1]){
			if(arr[0][0]>arr[0][1]and arr[0][0]>arr[1][0] and arr[1][0]>arr[1][1] and arr[0][1]>arr[1][1]){
				cout<<"YES"<<endl;
			}
		}else if(arr[0][1]<arr[1][0]){
			if(arr[0][0]<arr[0][1]and arr[0][0]<arr[1][0] and arr[1][0]>arr[1][1] and arr[0][1]<arr[1][1]){
				cout<<"YES"<<endl;
			}
		}
		else if(arr[0][1]>arr[1][0]){
			if(arr[0][0]>arr[0][1]and arr[0][0]>arr[1][0] and arr[1][0]<arr[1][1] and arr[0][1]>arr[1][1]){
				cout<<"YES"<<endl;
			}
		}else
		cout<<"NO"<<endl;
	}
	return 0;
}
