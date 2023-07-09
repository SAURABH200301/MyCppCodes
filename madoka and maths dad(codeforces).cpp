#include<bits/stdc++.h>
using namespace std;
void divisible_3(int n){
	string s;
	for(int i=0;i<(n/3);i++){
		s+="21";
	}
	cout<<s<<endl;
}

void divisible_3_1(int n){
	string s;
	bool t=true;
	while(n>0){
		if(t){
			s+="1";
			n-=1;
			t=false;
		}
		else{
			s+="2";
			n-=2;
			t=true;
		}
	}
	cout<<s<<endl;
}

void divisble_3_2(int n){
	string s;
	bool t=true;
	while(n>0){
		if(t){
			s+="2";
			n-=2;
			t=false;
		}
		else{
			s+="1";
			n-=1;
			t=true;
		}
	}
	cout<<s<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%3==0)
		  divisible_3(n);
		else if(n%3==1)
		  divisible_3_1(n);
		else
		  divisble_3_2(n);
	}
	return 0;
}
