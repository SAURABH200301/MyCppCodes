#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int a;cin>>a;
			v.push_back(a);
		}
		int i=0;
		while(i!=n){
			int num;cin>>num;
			string s;
			cin>>s;
			for(int j=0;j<num;j++){
				if(v[i]==0 and s[j]=='U'){
					 v[i]=9;
					 continue;
				}
				if(v[i]==9 and s[j]=='D'){
					v[i]=0;
					continue;
				}
				if(s[j]=='D'){
					v[i]++;
					continue;
				}
				 if(s[j]=='U'){
				 	v[i]--;
				 	continue;
				 } 
			}
			i++;
		}
		for(i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
