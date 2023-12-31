#include<bits/stdc++.h>
using namespace std;
int decode(int i, string &s,  vector<int>&dp){
    if(i>=s.size()) 
        return 1;
 
      if(dp[i]!=-1) 
          return dp[i];
     
    int op1=0,op2=0,ans=0;
    
    op1 = s[i]-'0';
    if(i<s.size()-1){   
        op2 = op1*10+(s[i+1]-'0');
    }
    if(op1>0) 
        ans += decode(i+1,s,dp);
   
     if(op1!=0 && op2>0 && op2<=26) 
        ans += decode(i+2,s,dp);
    return dp[i] = ans;
}

int numDecodings(string s) {
    
    vector<int> dp(s.size()+1 ,-1);
     return decode(0,s,dp);
}
int main(){
	string s;
	cin>>s;
	cout<<numDecodings(s);
	return 0;
}
