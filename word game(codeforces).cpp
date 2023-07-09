#include<bits/stdc++.h>
using namespace std;
// orz for qaq
// qaq orz for
// cod for ces


// iat roc hem ica lly
// bac ter iol ogi sts
// bac roc lly iol iat
void solve(vector<string> v1,vector<string> v2,vector<string> v3,int n){

//	cout<<endl;
	int n1=0,n2=0,n3=0;
	map<string ,int> m;
	for(int i=0;i<n;i++){
		m[v1[i]]++;
		m[v2[i]]++;
		m[v3[i]]++;
	}
	for(auto i: m){
		if(i.second==2){
			if(find(v2.begin(),v2.end(),i.first)!=v2.end() and find(v1.begin(),v1.end(),i.first)!=v1.end() and find(v3.begin(),v3.end(),i.first)==v3.end()){
				n1++;n2++;
				n3+=3;
				// cout<<n1<<" "<<n2<<" "<<n3<<" first"<<endl;
			}else if(find(v3.begin(),v3.end(),i.first)!=v3.end() and find(v1.begin(),v1.end(),i.first)!=v1.end() and find(v2.begin(),v2.end(),i.first)==v2.end()){
				n3++;n1++;
				n2+=3;
				// cout<<n1<<" "<<n2<<" "<<n3<<" second"<<endl;
			}else if(find(v3.begin(),v3.end(),i.first)!=v3.end() and find(v2.begin(),v2.end(),i.first)!=v2.end() and find(v1.begin(),v1.end(),i.first)==v1.end()){
				n1+=3;
				n2++;n3++;
				// cout<<n1<<" "<<n2<<" "<<n3<<" third"<<endl;
			}
		}
//else if(i.second==3){
// 			n1+=3;
// 			n2+=3;
// 			n3+=3;
// // 			cout<<n1<<" "<<n2<<" "<<n3<<" all"<<endl;
// 		}
	}
	cout<<n1<<" "<<n2<<" "<<n3<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string> v1,v2,v3;
		for(int i=0;i<n;i++){
			string s;
			cin>>s;
			v1.push_back(s);
		}
		for(int i=0;i<n;i++){
			string s;
			cin>>s;
			v2.push_back(s);
		}
		for(int i=0;i<n;i++){
			string s;
			cin>>s;
			v3.push_back(s);
		}
		solve(v1,v2,v3,n);
	}
	return 0;
}
