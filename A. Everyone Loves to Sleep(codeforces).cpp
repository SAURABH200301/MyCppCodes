#include<bits/stdc++.h>
using namespace std;
// 3
// 1 6 13
// 8 0
// 3 6 0
// 12 30
// 14 45
// 6 0
// 2 23 35
// 20 15
// 10 30

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,H,M,Hour=0,Min=0;
		cin>>n>>H>>M;
		vector<pair<int,int>> time;
		for(int i=0;i<n;i++){
			pair<int,int> p;
			cin>>p.first;
			cin>>p.second;
			time.push_back(p);
		}
		sort(time.begin(),time.end());
		for(auto i: time){
		    if(H==i.first and M==i.second){
		    	Hour=0;
		    	Min=0;
			}else if(H>i.first){
				int HH=23-H;
				int MM= 60-M;
				Hour=min(Hour,HH+H);
				Min=min(Min,MM+M);
			}else if(H<i.first){
				H--;
				Hour=min(H,Hour);
				Min=min(M,60-i.second);
			}
		}
		cout<<Hour<<" "<<Min<<endl;
// 		for(auto i : time){
// 			cout<<i.first<<" "<<i.second<<endl;
// 		}
	}
	return 0;
}
