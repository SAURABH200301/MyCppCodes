#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        if(intervals.size()==0)
              return {};
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        vector<int>temp=intervals[0];
        for(auto it : intervals)
        {
            if(it[0]<=temp[1])
            {
              temp[1]=max(temp[1],it[1]);  
            }
            else
            {
                ans.push_back(temp);
                temp=it;
            }
                
        }
        ans.push_back(temp);
        return ans;  
    }
int main(){
	int n;
	cin>>n;
	vector<vector<int>> v;
	for(int i=0;i<n;i++){
		vector<int> vec; 
		int num1,num2;
		cin>>num1>>num2;
		vec.push_back(num1);
		vec.push_back(num2);
		v.push_back(vec);
	}
	sort(v.begin(),v.end());
	vector<vector<int>> ans= merge(v);
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++)
			cout<<ans[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
