#include<bits/stdc++.h>
using namespace std;
int minMoves2(vector<int> nums){
	sort(nums.begin(),nums.end());
	int mid=nums[nums.size()/2];
	int count=0;
	for(int i=0;i<nums.size();i++){
		count+=abs(nums[i]-mid);
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<minMoves2(v);
	return 0;
}
