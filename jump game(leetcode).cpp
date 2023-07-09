#include<bits/stdc++.h>
using namespace std;
bool canJump(vector<int> nums){
	int n=nums.size();
	int reachable=0;
	for(int i=0;i<n;i++){
		if(reachable<i)
			return false;
		reachable=max(reachable,i+nums[i]);
	}
	return true;
}
//bool canJump(vector<int> nums){
//	int i=1;
//       while(i<=nums.size()){
//       	if(i>=nums.size()) return true;
//           if(nums[i-1]==0 and i!=nums.size()){
//           	cout<<"he "<<i<<endl;
//           	 return false;
//		   }
//            if(nums[i-1]==0 and i==nums.size())
//               return true;
//           i+=nums[i-1];
//           cout<<i<<endl;
//       } 
//       cout<<i<<"sdsfds"<<endl;
//       return true;
//}
int main(){
	int n;cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<canJump(v);
	return 0;
}
