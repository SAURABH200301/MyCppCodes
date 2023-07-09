#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    static bool compare(vector<int>& a, vector<int> & b)
    {
        if(a[0] == b[0])
            return a[1] < b[1];
        return a[0] > b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {   
        int n = people.size();
        
        sort(people.begin(), people.end(), compare); //Sorting the array according to comp function.
        vector<vector<int>> res; //To store the final array to be returned
        
        for(auto i: people){
        	cout<<i.first<<" "<<i.second<<endl;
		}
		cout<<endl;
        for(int i = 0; i < n; i++)
        {
            int idx = people[i][1];
            res.insert(res.begin() + idx, people[i]); //Inserting the element at desired position.
        }
        
        return res;
    }
};
int main(){
	vector<vector<int>> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		vector<int> c;
		for(int j=0;j<2;j++){
			int a;cin>>a;
			c.push_back(a);
		}
		v.push_back(c);
	}
	vector<vector<int>> vec =reconstructQueue(v);
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
