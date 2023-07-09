#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++)
		 cin>>arr[i];
		ll c=0,count=0;
		for(int i=0;i<n;i++){
			if(arr[i]%2==0){
				count++;
				if(count>c)
				  c=count;
			}
			else
			  count=0;
		}
		cout<<c<<endl;
	}
	
  return 0;
}
