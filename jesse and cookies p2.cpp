#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;


int main() {
    int N, K, ai;
    priority_queue<int, vector<int>, greater<int>> A;
    cin >> N >> K;
    for (int i = 0; i < N; ++i) {
        cin >> ai;
        A.push(ai);
    }
    int count = 0;
    while (A.top() < K) {
        if (A.size() < 2) {
            cout << "-1\n";
            return 0;
        }
        int m1 = A.top();
        A.pop();
        int m2 = A.top();
        A.pop();
        A.push(m1 + 2 * m2);
        count++;
    }
    cout << count << endl;
    return 0;
}
//#include<bits/stdc++.h>
//#define ll long long
//using namespace std;
//ll sweetness(ll n1,ll n2)
//{
//	ll z=n1+2*n2;
//	return z;
//}
//int main()
//{
//	ll n,k,count=0;
//	cin>>n>>k;
//	vector<ll> v;
//	for(ll i=0;i<n;i++)
//	{
//		ll a;cin>>a;
//		v.push_back(a);
//	}
//	sort(v.begin(),v.end());
//	if((v[0]+2*v[n-1])<k)
//	 cout<<"-1"<<endl;
//	 else{
//	while(v[0]<k)
//	{
//		count++;
//		ll a=sweetness(v[0],v[1]);
//		reverse(v.begin(),v.end());
//		v.pop_back();
//		v.pop_back();
//		v.push_back(a);
//		sort(v.begin(),v.end());
//	}
//	 cout<<count<<endl;
//      }
//	return 0;
//}
