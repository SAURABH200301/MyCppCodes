	#include <bits/stdc++.h>
	
	#define ll long long
	using namespace std;
	void solve(){
	        ll n,x,c;
	        cin>>n>>x>>c;
	        vector<int> v;
	        for(int i=0;i<n;i++){
	            ll a;cin>>a;
	            v.push_back(a);
	        }
	        ll sum=0,cost=0;
	        for(int i=0;i< v.size();i++){
	            if(x-v[i]>c){
	//            	cout<<v[i]<<endl;
	                sum+=x;
	                cost+=c;
	            }else
	                sum+=v[i];
	        }
	//        cout<<sum<<" "<<cost<<endl;
	        cout<<sum-cost<<endl;
	    }
	int main() {
	    
		int t;cin>>t;
		while(t--){
		    solve();
		}
		return 0;
	}

