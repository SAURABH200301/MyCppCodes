#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll x1,x2,x3,y1,y2,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		if((y1==y2 && y3<y1) || (y2==y3 && y1<y2) || (y3==y1 && y2<y1)){
			if(y1==y2) cout<<abs(x1-x2)<<endl;
			else if(y2==y3) cout<<abs(x2-x3)<<endl;
			else cout<<abs(x1-x3)<<endl;
		}
		else
		  cout<<0<<endl;
	}
	return 0;
}
