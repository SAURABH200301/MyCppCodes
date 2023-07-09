#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, m, i, j, steps;
    
    cin>>t;
    
    for(;t--;){
        cin>>n>>m;
        steps=0;
        vector<pair<pair<ll, ll>, pair<ll, ll>>> ans;
        
        string a[n], b[n];
        
        for(i=0; i<n; i++){
            cin>>b[i];
            
            a[i]=b[i];
            
            for(j=0; j<m; j++){
                a[i][j]='0';
            }
        }
        
        if(b[0][0]=='1'){
            cout<<"-1\n";
            continue;
        }
        
        for(i=n-1; i>=0; i--){
            for(j=m-1; j>=0; j--){
                
                if(a[i][j]!=b[i][j]){
                    if(a[i][j]=='1'){
                        a[i][j]='0';
                        steps++;
                        
                        ans.push_back({{i+1, j+1}, {i+1, j+1}});
                    }else{
                        a[i][j]='1';
                        steps++;
                        if(i>0){
                            ans.push_back({{i-1+1, j+1}, {1+i, j+1}});
                        }else{
                            ans.push_back({{i+1, j-1+1}, {i+1, j+1}});
                        }
                    }
                }
            }
        }
        
        cout<<steps<<"\n";
        
        for(i=0; i<steps; i++){
            cout<<ans[i].first.first<<" "<<ans[i].first.second<<" "<<ans[i].second.first<<" "<<ans[i].second.second<<"\n";
        }
    }
}
