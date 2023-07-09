#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> v1,v2;
		bool isSame=true;
		map<int,int> m1,m2;
		for(int i=0;i<n;i++){
			int a;cin>>a;
			m1[a]++;
			v1.push_back(a);
		}
		int c_s=0;
		for(int i=0;i<n;i++){
			int a;cin>>a;
			if(v1[i]!=a) isSame=false;
			else c_s++;
			m2[a]++;
			v2.push_back(a);
		}
		if(isSame) cout<<"0"<<endl;
		else{
			if(m1[0]==m2[0])
				cout<<"1"<<endl;
			else{
				if(n-c_s>1)
				 cout<<abs(m1[1]-m2[1])+1<<endl;
				else
					cout<<abs(m1[1]-m2[1])<<endl;
			}
		}
	}
	return 0;
}
