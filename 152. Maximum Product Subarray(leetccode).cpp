#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int> nums){
	int res=*max_element(nums.begin(),nums.end());
	int curMin=1,curMax=1;
	
	for(int i=0;i<nums.size();i++){
		if(nums[i]==0){
			curMin=1,curMax=1;
			continue;
		}
		int tmp=curMax*nums[i];
		curMax=max(nums[i]*curMax,max(nums[i]*curMin,nums[i]));
		curMin=min(tmp,min(nums[i]*curMin,nums[i]));
		cout<<tmp<<" "<<curMax<<" "<<curMin<<endl;
		res=max(res,curMax);
	}
	return res;
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<maxProduct(v);
	return 0;
}
