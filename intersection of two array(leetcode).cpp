#include<bits/stdc++.h>
using namespace std;

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2,2]
// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [4,9]

vector<int> intersect(vector<int> v1,vector<int> v2){
	unordered_map <int,int> m1,m2;
	for(int i=0;i<v1.size();i++){
	    m1[v1[i]]++;
	}
	for(int i=0;i<v2.size();i++){
		m2[v2[i]]++;
	}
	vector<int> v;
	for(auto i: m1){
		if(m2[i.first]>0)
		{
			if(i.second>=m2[i.first])
			  for(int j=0;j<m2[i.first];j++){
				v.push_back(i.first);
			  }
			else{
				for(int j=0;j<i.second;j++){
					v.push_back(i.first);
				}
			}
		}
	}
	return v;
}
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> v1,v2;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v1.push_back(a);
	}
	v1.resize(n);
	for(int i=0;i<m;i++){
		int a;
		cin>>a;
		v2.push_back(a);
	}
	v2.resize(m);
	vector<int> vec= intersect(v1,v2);
	for(int i=0;i<vec.size();i++)
	  cout<<vec[i]<<" ";
	return 0;
}
