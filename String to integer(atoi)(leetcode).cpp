#include<bits/stdc++.h>
using namespace std;
int myAtoi(string s){
	if(s.length()==0) return 0;
	int i=0,num=0;
	while(s[i]==' ' or s[i]=='_' or s[i]=='0'){
	   i++;
	}
//	while(s[i]>='a' and s[i]<='z' or s[i]==' '){
//		i++;
//	}
	if(s[i]=='-'){
		num=-1;
		i++;
	} else{
		num=1;
	} 
	if(s[i]=='+') i++;
    vector<int> v;
	if(s[i]>='0' and s[i]<='9'){
		int n=s[i]-'0';
		v.push_back(n);
//		cout<<n<<" "<<num<<endl;
		i++;
	}
//	cout<<"ghi:"<<i<<endl;
	while(s[i]>='0' and s[i]<='9' or i<s.length()){
		v.push_back(s[i]-'0');
		i++;
//		cout<<i<<endl;
	}
	int si=v.size();
	int numm=0;
	for(int i=0;i<v.size();i++){
//		cout<<v[i]<<" ";
	     numm+=pow(10,si-i)*v[i];
	}
	numm*=num;
//	cout<<numm/10<<endl;
	
	return numm;
}
int main(){
	string s;
	cin>>s;
	cout<<myAtoi(s);
	return 0;
}
