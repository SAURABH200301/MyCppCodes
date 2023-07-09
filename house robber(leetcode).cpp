#include<bits/stdc++.h>
using namespace std;
int rob(vector<int>& nums) {
         int len = nums.size();
        vector<int> dp(len+1);
        for(int i = 1; i <= len; i++){
            dp[i] = max(dp[i - 1], ((i > 1) ? dp[i - 2] : 0) + nums[i - 1]);
        }
        for(int i=0;i<len+1;i++){
        	cout<<dp[i]<<" "; 
		}
        return dp[len];
    }
int main(){
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<endl<<rob(v);
	return 0;
}
