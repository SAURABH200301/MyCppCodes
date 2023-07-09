#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
int main(){
	FAST
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<int,int> m1,m2;
		for(int i=0;i<4*n-1;i++){
			int a,b;
			cin>>a>>b;
			m1[a]++;
			m2[b]++;
		}
		for(auto i:m1){
			if(i.second%2==1)
			{
			   cout<<i.first<<" ";
			   break;	
			}
			  
		}
		for(auto i:m2){
			if(i.second%2==1){
				cout<<i.first<<endl;
				break;
			}
		}
	}
	return 0;
}
