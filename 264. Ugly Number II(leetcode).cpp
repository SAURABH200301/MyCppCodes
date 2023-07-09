#include<bits/stdc++.h>
using namespace std;
int nthUglyNumber(int n) {
        int n2=0, n3=0, n5=0;
        vector<int> dp(n+1);
        dp[0] = 1;
        for(int i=1; i<=n; i++){
             dp[i] = min(2*dp[n2], min(3*dp[n3], 5*dp[n5]));
             if(2*dp[n2] == dp[i]) n2++;
             if(3*dp[n3] == dp[i]) n3++;
             if(5*dp[n5] == dp[i]) n5++;
             cout<<dp[i]<<" ";
        }
        return dp[n-1];
    }	
int main(){
	int n;
	cin>>n;
	cout<<endl<<nthUglyNumber(n);
	return 0;
}
