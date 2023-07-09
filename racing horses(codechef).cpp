#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++)
		  cout<<v[i]<<" ";
		  cout<<endl;
		int min= v[1]-v[0];
		for(int i=n-1;i>=2;i--){
			if(abs(v[i-2]-v[i-1])<min){
				min=abs(v[i-2]-v[i-1]);
//				cout<<"min:"<<min<<endl;
			}
		}
		cout<<min<<endl;
	}
	return 0;
}
