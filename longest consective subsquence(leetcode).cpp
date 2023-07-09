#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> v){
    if(v.size()<=0){
       return 0;
    }
	map<int,int> m;
	for(int i=0;i<v.size();i++){
		m[v[i]]++;
	}
	int count=0,maxi=0;
	map<int,int> ::iterator it,i;
	it=m.begin();
	i=m.begin();
	i++;
	for(;i!=m.end();i++,it++){
	   // cout<<it->first<<" "<<i->first<<endl;
		if(it->first==i->first-1){
		  //  cout<<"hey";
			count++;
		}
		else{
		  //  cout<<maxi<<" "<<count<<endl;
		    count++;
			maxi=max(maxi,count);
			// cout<<maxi<<endl;
			count=0;
		}
	}
	maxi=max(maxi,count+1);
	return maxi;
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<longestConsecutive(v);
	return 0;
}
