#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v,s;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		for(int i=1;i<n;i++){
			if(v[i-1]==v[i]){
				s.push_back(v[i]);
				i++;
			}
		}
		sort(s.begin(),s.end());
		if(s.size()==1)
		  cout<<"-1"<<endl;
		else
	    	cout<<s[s.size()-1]*s[s.size()-2]<<endl;
	}
	return 0;
}
