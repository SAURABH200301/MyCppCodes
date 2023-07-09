#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		pair<int,int> p;
		cin>>p.second;
		cin>>p.first;
		
		v.push_back(p);
	}
	sort(v.begin(),v.end());
	for(int i=n-1;i>=0;i--){
	    if(v[i].first == v[i-1].first)
	    {
	        if(v[i].second>=v[i-1].second){
	            cout<<v[i-1].second<<" "<<v[i-1].first<<" ";
	            cout<<v[i].second<<" "<<v[i].first<<" ";
	            i--;
	           //cout<<" hey";
	        }
	    }
	    else
		   cout<<v[i].second<<" "<<v[i].first<<" ";
	}
	return 0;
}
