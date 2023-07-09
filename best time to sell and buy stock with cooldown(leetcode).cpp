#include<bits/stdc++.h>
using namespace std;
// [1,2,3,0,2]
// unordered_map<int,int> dp;
int returnMax(vector<int> v,int i,bool buying,vector<int>dp ){
    if(i>=v.size()) return 0;
	if(dp[i]!=INT_MIN) return dp[i];
	
	
	if(buying){
	   // cout<<"hey ";
	   //cout<<"before buy"<<endl;
		int buy= returnMax(v,i+1,!buying,dp)-v[i];
		int cooldown =returnMax(v,i+1,buying,dp);
		dp[i]=max(buy,cooldown);
// 		cout<<buy<<" "<<cooldown<<" buying "<<i<<endl;
	}else{
	   // cout<<"before selling"<<endl;
		int sell =returnMax(v,i+2,!buying,dp)+v[i];
		int cooldown =returnMax(v,i+1,buying,dp);
		dp[i]=max(sell,cooldown);
// 		cout<<sell<<" "<<cooldown<<" selling "<<i<<endl;
	}
	
	return dp[i];
}
int maxProfit(vector<int> v){
    vector<int> dp;
    for(int i=0;i<v.size()+1;i++){
        dp.push_back(INT_MIN);
    }
	return returnMax(v,0,true,dp);
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<maxProfit(v);
	return 0;
}
