#include<bits/stdc++.h>
using namespace std;
bool checkPossibility(vector<int>& nums){
	int mini = *min_element(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
           if(nums[i]>nums[i+1]){
               if(nums[i]>0)
                  nums[i]=mini-1;
               else
                   nums[i]=mini+1;
               if(is_sorted(nums.begin(),nums.end()))
                   return true;
               else
                   return false;
           }
        }
        return false;
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<checkPossibility(v);
	return 0;
}
