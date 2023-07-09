#include<bits/stdc++.h>
using namespace std;
bool valid(int x,int k,int n){
	int i=0,j=0;
	string s= to_string(n);
	string t= to_string(x);
	while(i<s.length()){
		if(j>=t.length()) return 1;
		if(s[i]==t[j])  j++;
		i++;
	}
	return j>=t.length();
}
int solve(int l,int h,int ans,int k,int n){
	if(l>h) return ans;
	int mid = l+(h-l)/2;
	if(valid(mid,k,n)){
		return solve(l,mid-1,mid,k,n);
	}
	return solve(mid+1,h,ans,k,n);
}
int main(){
	int n;cin>>n;
	int k;cin>>k;
	int ans=solve(k+1,n,n,k,n);
	cout<<ans<<endl;
	return 0;
}
