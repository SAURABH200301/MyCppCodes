#include<iostream>
using namespace std;
int a[200009];
int main(){
	int t, n;
	cin >>t ;
	while(t--){
		cin >> n;
		for (int i=0;i<n;i++) cin >> a[i];
		int ans = 0;
		if (a[n-2]>a[n-1]) cout << -1 << endl;
		else if (a[n-1]<0) {
			for (int i=0;i<n-1;i++) if (a[i]>a[i+1]) ans = -1;
			cout << ans << endl;
		}
		else {
			cout << n-2 << endl;
			for (int i=0;i<n-2;i++) cout << i+1 << ' ' << n-1 << ' ' << n << endl;
		}
		
	}
} 

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n,opr=0;
//		cin>>n;
//		int arr[n];
//		vector<int> v;
//		for(int i=0;i<n;i++){
//			cin>>arr[i];
//		}
//		if(arr[n-1]<arr[n-2])
//		   cout<<-1<<endl;
//		else{
//		for(int i=0;i<n-2;i++){
//			if(arr[i]>arr[i+1]){
//				arr[i]=arr[i+1]-arr[i+2];
//				opr++;
//				v.push_back(i+1);
//				v.push_back(i+2);
//				v.push_back(i+3);
////				cout<<i+1<<" "<<i+2<<" "<<i+3<<endl;
//			}
//		}
//		cout<<opr<<endl;
//		if(v.size()!=0)
//		for(int i=1;i<v.size()+1;i++){
//			cout<<v[i-1]<<" ";
//			if(i%3==0)
//			  cout<<endl;
//		}
//	   }
//	}
//	return 0;
//}
