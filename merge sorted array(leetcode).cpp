#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> v1,vector<int> v2,int n,int m){
	vector<int> temp;
	for(int i=0;i<n;i++)
	  temp.push_back(v1[i]);
	for(int i=0;i<m;i++)
	  temp.push_back(v2[i]);
	
	sort(temp.begin(),temp.end());
	for(int i=0;i<temp.size();i++)
	  cout<<temp[i]<<" ";
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> v1,v2;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v1.push_back(a);
	}
	for(int i=0;i<m;i++){
		int a;
		cin>>a;
		v2.push_back(a);
	}
	int n1,n2;
	cin>>n1>>n2;
	merge(v1,v2,n1,n2);
	return 0;
}
