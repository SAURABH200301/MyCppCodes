#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t=1;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a;
        bool ok=n&1;
             for(int i=2;i<=n-ok;i+=2){
                a.push_back(i);
                a.push_back(i-1);
              }
         if(ok){
            a.push_back(n);
            swap(a[n-2],a[n-1]);
         }
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }

}
