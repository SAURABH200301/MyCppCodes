#include <bits/stdc++.h>  
#define ll long long
using namespace std; 
void fun(){
	int n,l;
	cin>>n>>l;
	ll arr[n];
	vector<ll>bit(l,0);
	for(int i=0;i<n;i++){
		cin>>arr[i];
		ll in=0;
		while(arr[i]>0){
			bit[in++]+=(arr[i]%2);
			arr[i]/=2;
		}
	}
	for(int i=0;i<l;i++){
		if(bit[i]>=(n+1)/2) bit[i]=1;
		else bit[i]=0;
	}
	ll a=0;
	for(int i=0;i<l;i++){
		if(bit[i]){
			a+=pow(2,i);
		}
	}
	cout<<a<<endl;
} 
int main()  
{  
   int t;
   cin>>t;
   while(t--){
   	 fun();
   }
    
  return 0;  
}  
