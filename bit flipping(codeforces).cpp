#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		
		 ll n,k;
            string s;
            cin>>n>>k>>s;
            vector<ll> v(n,0);
            if(k&1){
                ll pos_first_one=n-1;
                for(ll i=0;i<n;i++){
                    if(s[i]=='1'){
                        pos_first_one=i;
                        break;
                    }
                }
                for(ll i=0;i<n;i++){
                    if(i==pos_first_one){
                        continue;
                    }
                    if(s[i]=='0'){
                        s[i]='1';
                    }
                    else{
                        s[i]='0';
                    }
                }
                k--;
                v[pos_first_one]++;
            }
            // cout<<"temp s "<<s<<endl;
            ll one=0,zero=0;
            vector<ll> v_zero,v_one;
            for(ll i=0;i<n;i++){
                if(s[i]=='0'){
                    zero++;
                    v_zero.push_back(i);
                }
                else{
                    one++;
                    v_one.push_back(i);
                }
            }
            for(ll i=0;i+1<v_zero.size() && k>0;i+=2){
                v[v_zero[i]]++;
                v[v_zero[i+1]]++;
                s[v_zero[i]]='1';
                s[v_zero[i+1]]='1';
                k-=2;
            }
            if(v_zero.size()&1 && k>0){
                v[v_zero.back()]++;
                s[v_zero.back()]='1';
                s[n-1]='0';
                v[n-1]++;
                k-=2;
            }
            if(k>0){
                v[n-1]+=k;
            }
            cout<<s<<endl;
            for(int i=0;i<v.size();i++)
              cout<<v[i]<<" ";
            cout<<endl;
         
	}
	return 0;
}
