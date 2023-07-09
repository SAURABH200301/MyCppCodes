#include<bits/stdc++.h>
using namespace std;
vector<int> fun(vector<int> v,int t){
	vector<int> vec;
	for(int i=0;i<v.size();i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]+v[j]==t)
			{
				vec.push_back(i);
				vec.push_back(j);
				break;
			}
		}
	}
	return vec;
}
int main(){
	int n,t;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	cout<<"enter the target"<<endl;
	cin>>t;
	vector<int> vec = fun(v,t);
	for(int i=0;i<vec.size();i++)
	  cout<<vec[i]<<" ";
	return 0;
}
