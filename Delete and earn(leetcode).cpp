#include<bits/stdc++.h>
using namespace std;
int deleteAndEarn(vector<int> v){
	 int len=v.size();
	 if(len==0) return 0;
	 int maxx= *max_element(v.begin(),v.end());
	 int *val =new int[maxx+1];
	 for(int i=0;i<=maxx;i++)
	   val[i]=0;
	 for(int i =0;i<=maxx;i++)
	    val[v[i]]++;
	    
	int *dp =new int[maxx+1];
	for(int i=0;i<=maxx;i++)
	  dp[i]=0;
//	  cout<<0<<" "<<val[0]<<endl;
	for(int i=1;i<=maxx;i++){
//		cout<<i<<" "<<val[i]<<endl;
		dp[i]=max(dp[i-1],(i>1?dp[i-2]:0)+i*val[i]);
	}
//	for(int i=0;i<=maxx;i++)
//	  cout<<dp[i]<<" ";
//	  cout<<endl;
	return dp[maxx];
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<deleteAndEarn(v);
	return 0;
}
