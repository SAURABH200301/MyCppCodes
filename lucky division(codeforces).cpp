#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s="YES";
	if(n%4==0 or n%7 ==0 or n%47==0 or n%74==0)
	   cout<<s<<endl;
	else{
		int a=n ,t=0;
		while(a>0){
			int p=a%10;
			a/=10;
//			cout<<p<<"p"<<endl;
			if(p!=7 and p!=4)
			{
			  s="NO";
		    }
//		    if(p!=4)
//		      s="NO";
		}
		cout<<s<<endl;
	}
	return 0;
}
