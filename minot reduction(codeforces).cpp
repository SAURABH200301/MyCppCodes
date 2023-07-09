#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;int f=0;
		cin>>s;
		int n=s.length();
		for(int i=n-2;i>=0;i--){
			int k1=s[i]-48;
			int k2=s[i+1]-48;
			int k=k1+k2;
//			cout<<k1<<" "<<k2<<" "<<k<<endl;
			if(k>=10){
				f++;
				s[i+1]=(k%10)+48;
				k/=10;
				s[i]=k+48;
				break;
			}
			
		}
		if(f>0)
		  {
		  	cout<<s<<endl;
		  	continue;
		  }
		
			cout<<(s[0]-48)+(s[1]-48);
			for(int i=2;i<n;i++){
				cout<<s[i];
		    }
		    cout<<endl;
	}
	return 0;
}
