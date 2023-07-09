#include<bits/stdc++.h>
using namespace std;
static bool compare(vector<int>& a, vector<int> & b){
        if(a[0] == b[0])
            return a[1] < b[1];
        return a[0] > b[0];
}
int maximumUnits(vector<vector<int>> v,int n){
	vector<vector<int>> ve;
	for(int i=0;i<v.size();i++){
		vector<int> vec;
		vec.push_back(v[i][1]);
		vec.push_back(v[i][0]);
		ve.push_back(vec);
	}
	sort(vec.begin(),vec.end(),compare);
	int temp=0,count=0;
	for(int i=0;i<vec.size();i++){
		temp+=vec[i][1];
		if(temp>n or temp==n){
			count+=n*vec[i][0];
			break;
		}
		else{
			n-=temp;
			count+=temp*vec[i][0];
			temp=0;
		}
	}
	return count;
}
int main(){
	int n,s;
	cin>>n>>s;
	vector<vector<int>> v;
	for(int i=0;i<n;i++){
		vector<int> ve;
		for(int j=0;j<2;j++){
			int a;cin>>a;
			ve.push_back(a);
		}
		v.push_back(ve);
	}
	cout<<maximumUnits(v,s);
   return 0;
}
