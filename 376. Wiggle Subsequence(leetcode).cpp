#include<bits/stdc++.h>
using namespace std;
//  [1,17,5,10,13,15,10,5,16,8]
// [1 7 4 9 2 5]
// [1,2,3,4,5,6,7,8,9]
int wiggleMaxLength(vector<int> nums) {
        if (nums.size() < 2)
            return nums.size();
        int *up = new int[nums.size()];
        int *down = new int[nums.size()];
        up[0] = down[0] = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                up[i] = down[i - 1] + 1;
                down[i] = down[i - 1];
            } else if (nums[i] < nums[i - 1]) {
                down[i] = up[i - 1] + 1;
                up[i] = up[i - 1];
            } else {
                down[i] = down[i - 1];
                up[i] = up[i - 1];
            }
        }
        return max(down[nums.size() - 1], up[nums.size() - 1]);
    }
//int calculate(vector<int> nums, int index, bool isUp) {
//        int maxcount = 0;
//        for (int i = index + 1; i < nums.size(); i++) {
//            if ((isUp && nums[i] > nums[index]) || (!isUp && nums[i] < nums[index]))
//                maxcount = max(maxcount, 1 + calculate(nums, i, !isUp));
//        }
//        return maxcount;
//    }
//int wiggleMaxLength(vector<int> v){
//	if (v.size()< 2)
//            return v.size();
//        return 1 + max(calculate(v, 0, true), calculate(v, 0, false));
//}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<wiggleMaxLength(v);
	return 0;
}
