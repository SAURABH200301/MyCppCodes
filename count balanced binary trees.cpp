#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

long long int countBT(int h) {
     ll mod= 1000000007;
    long long int dp[h + 1];
    //base cases
    dp[0] = dp[1] = 1;
    for(int i = 2; i <= h; i++) {
        dp[i] = (dp[i - 1] * ((2 * dp [i - 2])%mod + dp[i - 1])%mod) % mod;
    }
    return dp[h];
}

int balancedBST(int h){
	//using recusion
	if(h<=1) return 1;
	
	int mod = (int)(pow(10,9))+7;
	ll x=balancedBST(h-1);
	ll y=balancedBST(h-2);
	ll temp= (x*x)% mod;
	ll temp1= (2*x*y)%mod;
	int ans= int (temp+temp1)%mod;
	return ans;
}
int main(){
	int h;
	cin>>h;
	cout<<balancedBST(h)<<endl;
	
	cout<<countBT(h);
	return 0;
}
