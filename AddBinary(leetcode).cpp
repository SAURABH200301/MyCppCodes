#include<bits/stdc++.h>
using namespace std;
string addBinary(string a,string b){
	string c="";
	int num1=stoi(a, 0, 2);
	int num2=stoi(b,0,2);
// 	cout<<num1<<" "<<num2<<endl;
	int num3=num1+num2;
	string s= to_string(num3);
// 	cout<<typeid(s).name();
	return s;
}
int main(){
	string a,b;
	cin>>a>>b;
	cout<<addBinary(a,b);
	return 0;
}
