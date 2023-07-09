#include<bits/stdc++.h>
using namespace std;
int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int i=0,count=0;
        if(coins==0) return 0;
        while(coins!=0 and costs[i]<=coins){
            coins=coins-costs[i];
            i++;
            count++;
        }
        return count;
    }
int main(){
	int n,c;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cin>>c;
	cout<<maxIceCream(v,c);
	return 0;
}
