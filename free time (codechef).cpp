#include<bits/stdc++.h>
#define F first
#define S second
#define all(v) v.begin(),v.end()
using namespace std;

int main(){
	int n,m;
    cin>>n>>m;
    vector<pair<int,int>> a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i].F>>a[i].S;
    }
    for(int i=0;i<m;i++){
        cin>>b[i].F>>b[i].S;
    }
    sort(all(a));sort(all(b));
    int i=0,j=0,ans=0;
    while(i<n and j<m){
        int l=max(a[i].F,b[j].F);
        int r=min(a[i].S,b[j].S);
        if(l<=r){
            ans+=(r-l);
        }
        if(a[i].S<b[j].S){
            i++;
        }
        else j++;
    }
    cout<<ans<<endl;
	return 0;
}
