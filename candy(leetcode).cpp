#include<bits/stdc++.h>
using namespace std;
int candy(vector<int> v){
	int l[v.size()]={1};
	int r[v.size()]={1};

	for(int i=1;i<v.size();i++){
		if(v[i]>v[i-1]) l[i]=l[i-1]+1;
		else l[i]=l[i-1];
	}

	for(int i=v.size()-2;i>=0;i--){
		if(v[i]>v[i+1]) r[i]=r[i+1]+1;
		else r[i]=r[i+1];
	}
	int count=0;
	for(int i=0;i<v.size();i++){
//		cout<<r[i]<<" "<<l[i]<<endl;
		count+=max(r[i],l[i]);
	}
	
	return count;
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<candy(v);
	return 0;
}
