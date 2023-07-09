#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t>0){
		int l,count=0;
		cin>>l;
		string s;cin>>s;
		for(int i=0;i<s.length();i++){
			count++; //jus opposite of the part 1 counting the num of 0 before any 1
			if(s[i+1]=='1') break;
		}
		cout<<count<<endl;
		t--;
	}
	return 0;
}
