#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        bool isDup= false;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(m[nums[i]]>1){
                isDup=true;
                return isDup;
            }
        }
        if(!isDup)
            return isDup;
    }

int main(){
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	cout<<containsDuplicate(v);
	return 0;
}
