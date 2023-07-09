#include<bits/stdc++.h>
using namespace std;
string intToRoman(int n){
	map<int,string> l;
	l[1]="I";
	l[4]="IV";
	l[5]="V";
	l[9]="IX";
	l[10]="X";
	l[40]="XL";
	l[50]="L";
	l[90]="XC";
	l[100]="C";
	l[400]="CD";
	l[500]="D";
	l[900]="CM";
	l[1000]="M";
	
	string s="";
	map<int,string> :: reverse_iterator it;
	for(it=l.rbegin();it!=l.rend();it++){
		if(n/it->first){
			int count=n/it->first;
			while(count!=0){
			   s+=it->second;
			   count--;	
			}
			n%=it->first;
		}
	}
	return s;
}
int main(){
	int n;
	cin>>n;
	cout<<intToRoman(n);
	return 0;
}
