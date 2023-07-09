#include<bits/stdc++.h>
#define MOD 1000000007
//  h = 5, w = 4, horizontalCuts = [1,2,4], verticalCuts = [1,3]
// h = 5, w = 4, horizontalCuts = [3,1], verticalCuts = [1]
using namespace std;
int maxArea(int h,int w,vector<int> hor,vector<int> ver){
    sort(hor.begin(),hor.end());
    sort(ver.begin(),ver.end());
	int maxx=0,maxv=0;
	for(int  i=1;i<hor.size();i++){
		maxx=max(maxx,hor[i]-hor[i-1]);
	}
	maxx= max(maxx,hor[0]-0);
	maxx=max(maxx,h-hor[hor.size()-1]);

	for(int i=1;i<ver.size();i++){
		maxv=max(maxv,ver[i]-ver[i-1]);
	}
	maxv=max(maxv,ver[0]-0);
	maxv=max(maxv,w-ver[ver.size()-1]);

    int a= ((maxv) % MOD)%MOD;
    int b= ((maxx) % MOD)%MOD;
        cout<<a<<" "<<b<<endl;
    int result=(1LL*a*b)%MOD;
	return result;
}
int main(){
	int h,w;
	cin>>h>>w;
	int hc,vc;
	cin>>hc>>vc;
	vector<int> hor,ver;
	for(int i=0;i<hc;i++){
		int a;cin>>a;
		hor.push_back(a);
	}
	for(int i=0;i<vc;i++){
		int a;cin>>a;
		ver.push_back(a);
	}
	cout<<maxArea(h,w,hor,ver);
	return 0;
}
