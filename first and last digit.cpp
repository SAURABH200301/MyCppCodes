#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;cin>>n;
		cout<<int(n[0])-48+int(n[n.length()-1])-48<<endl;
	}
	return 0;
}
