#include<bits/stdc++.h>
using namespace std;
int numberOfWeakCharacters(vector<vector<int>>& v){
	sort(v.begin(),v.end());
	int count=0;
	for(int i=0;i<v.size();i++){
		if((v[i][0]>v[i+1][0] and v[i][1]>v[i+1][1])or(v[i][0]<v[i+1][0] and v[i][1]<v[i+1][1])){
			count++;
		}
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	vector<vector<int>> v;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		vector<int> vec;
		vec.push_back(a);
		vec.push_back(b);
	}
	cout<<numberOfWeakCharacters(v);
	return 0;
}
