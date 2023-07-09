#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,sumR=0,sumB=0,indexR=0,indexB=0;
		bool isYes= false;
		cin>>n;
		indexB=n;
		ll arr[n];
		for(int i=0;i<n;i++)
		  {
		  	cin>>arr[i];
		  }
		sort(arr,arr+n);
		sumB=arr[0]+arr[1];
		sumR=arr[n-1];
		indexB=2;
		indexR=n-2;
		while(indexB<indexR){
			if(sumR>sumB){
				isYes=true;
				break;
			}
			sumB+=arr[indexB],sumR+=arr[indexR];
			indexB++,indexR--;
		}
		if(isYes || sumR>sumB) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
