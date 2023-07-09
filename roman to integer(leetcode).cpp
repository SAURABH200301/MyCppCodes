#include<bits/stdc++.h>
using namespace std;
// MCMXCIV
int romanToInt(string s){
	map<string,int> l;
	l["I"]=1;
	l["IV"]=4; 
	l["V"]=5;
	l["IX"]=9;
	l["X"]=10;
	l["XL"]=40;
	l["L"]=50;
	l["XC"]=90;
	l["C"]=100;
	l["CD"]=400;
	l["D"]=500;
	l["CM"]=900;
	l["M"]=1000;
	int num=0;
	for(int i=0;i<s.length();i++){
	  string str=s.substr(i,2);
// 	  cout<<str;
	  if(l.find(str)!=l.end()){
	  	 auto it= l.find(str);
	    num+=it->second;
	    i++;
	   // cout<<"hey";
	  }
	  else{
	   //   cout<<"hello";
	      str= s.substr(i,1);
	   	  auto it= l.find(str);
	   	  num+=it->second;
	   }
	}
	return num;
}
int main(){
     string s;
	cin>>s;
	cout<<romanToInt(s);	
	return 0;
}
