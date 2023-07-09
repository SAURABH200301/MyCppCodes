#include<bits/stdc++.h>
using namespace std;
bool increasingTriplet(vector<int>& nums) {
    if(nums.size()<3) return false;
        if(is_sorted(nums.begin(),nums.end()) and nums[0]<nums[nums.size()-1])
            return true;
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                if(count>=3){
                    return true;
                }else
                    count++;
            }else{
                count=0;
            }
        }
    return false;
}
int main(){
	int n;cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	if(increasingTriplet(v)){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	return 0;
}
