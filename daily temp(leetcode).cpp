#include<bits/stdc++.h>
using namespace std;
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> p_stk;
        vector<int> results(temperatures.size(), 0);
        for(int i = 0; i< temperatures.size(); ++i) {
            while(!p_stk.empty() && temperatures[i] > p_stk.top().second) {
                results[p_stk.top().first] = i - p_stk.top().first;
                p_stk.pop();
            }
            p_stk.push(make_pair(i, temperatures[i]));
        }
        return results;
    }
int main(){
	int n;cin>>n;
	vector<int> t;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		t.push_back(a);
	}
	vector<int> ans=dailyTemperatures(t);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
