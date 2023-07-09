#include<bits/stdc++.h>
using namespace std;
//[26,6,4,27,6,18]
long long MOD= 1e+7;
int squareFreeSubsets(vector<int>& nums){
	long long ans=0;
	for(int i=0;i<nums.size();i++){
		int sq=sqrt(nums[i]);
		if(sq*sq==nums[i] and nums[i]!=1){
			nums.erase(nums.begin()+i);
			i--;
		}
	}
	sort(nums.begin(),nums.end());
	for(int i=0;i<nums.size();i++){
		for(int j=i+1;j<nums.size();j++){
			int num=nums[i]*nums[j];
			int sq=sqrt(num);
			if(sq*sq==num and nums[i]!=1){
				nums.erase(nums.begin()+j);
				j--;
			}
		}
	}
	for(int i=0;i<nums.size();i++)
		cout<<nums[i]<<" ";
		cout<<endl;
	ans=nums.size();
	ans=ans*(ans+1)/2;
	int anss=ans%MOD;
	return anss;
}
int main(){
	int n;cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<squareFreeSubsets(v);
	return 0;
}
