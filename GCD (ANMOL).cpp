#include<bits/stdc++.h>
#define ll long long 
using namespace std;
     
int main(){
	int t;
	cin>>t;
	while(t--){
	
	int l,r,k;
	 cin >> l >> r >> k;
 
        ll cc = r - l + 1;
 
        if(r == 1 and l == 1){
            cout << "NO" << endl;
            continue;
        }
        if(cc <= 1){
            cout << "YES" << endl;
            continue;
        }
        if((l%2) and (r%2)){
            ll val = (cc+1)/2;
            if(k < val){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
            continue;
        }
        ll val = cc/2;
        if(k < val){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
     }
        return 0;
	}
