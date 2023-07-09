#include<bits/stdc++.h>
using namespace std;
 int solve(vector<int>& nums, int target,int *dp) {
        
        if(target == 0) {
            return 1;  
        }
        
        if(target < 0) {
            return 0;
        }
        if(dp[target]!=-1) return dp[target];
        int count = 0;
        for(int i=0; i<nums.size(); i++) {
            count += solve(nums, target-nums[i],dp);
        }
        return dp[target]=count;
    }
 int combinationSum4(vector<int>& nums, int target) {
        int * dp =new int[target+1];
        for(int i=0;i<=target;i++)
          dp[i]=-1;
        return solve(nums, target,dp);
    }
    
   

int main(){
	int n,target;
	cin>>n>>target;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<combinationSum4(v,target);
	return 0;
}
