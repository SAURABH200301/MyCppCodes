#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
ll n,q;
cin >> n >> q;
vector <ll> a(n);
for(ll i = 0; i < n; i++){
    cin >> a[i];
}

while(q--){
    ll l,r,x;
    cin >> l >> r >> x;
    l--;r--;

    if(x > a[r]){
        cout << 0 << endl;
        continue;
    }

    ll start = lower_bound(a.begin()+l,a.begin()+r,x) - a.begin();
    cout << r - start + 1 << endl;
}

return 0;
}
