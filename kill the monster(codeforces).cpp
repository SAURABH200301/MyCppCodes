#include <bits/stdc++.h>
using namespace std;
 
int main(){
	long long int t,hc,dc,hm,dm,k,w,a,i,d;
	cin>>t;
	while(t--){
		cin>>hc>>dc;
		cin>>hm>>dm;
		cin>>k>>w>>a;
		d=0;
		for(i=0;i<=k;i++){
			if((hc-1+a*i)/dm>=(hm-1)/(dc+w*(k-i))){
				cout<<"YES"<<endl;
				d=1;
				break;
			}
		}
		if(d==0){
			cout<<"NO"<<endl;
		}
	}
}

