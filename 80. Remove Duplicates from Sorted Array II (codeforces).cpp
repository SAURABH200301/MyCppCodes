#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& v){
	if(v.size()<3) return v.size();
	int in=2;
	for(int i=2;i<v.size();i++){
		if(v[i]!=v[in-2]){
			v[in++]=v[i];
		}
	}
	return in;
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	 cout<<removeDuplicates(v);
	return 0;
}
