#include<bits/stdc++.h>

// memorization method(top down)
using namespace std;
int find_min(int n,int *ans){
	if(n<=1) return 0;
	if(ans[n]!=-1) return ans[n];
	int a=10000,b=10000,c=10000;
	bool p1=false,p2=false;

	if(n%3==0){
		a=1+find_min(n/3,ans);
		p1=true;
	}
	if(n%2==0) {
		b=1+find_min(n/2,ans);
		p2=true;
	}
	 c= 1+find_min(n-1,ans);
	if(p1 and p2){
		int d= min(a,b);
		ans[n]= min(d,c);
	}
	if(p1)
	  ans[n]=min(a,c);
	else if(p2)
	  ans[n]=min(b,c);
	else 
	  ans[n]= c;
//	cout<<a<<" "<<b<<" "<<c<<" "<<endl;
//  cout<<n<<" "<<ans[n]<<endl;
	return ans[n];
}
int min_steps(int n){
	int *ans= new int[n+1];
	for(int i=0;i<n+1;i++)
	  ans[i]=-1;
	return find_min(n,ans);
}
int main(){
	int n;
	cin>>n;
	cout<<min_steps(n);
	return 0;
}
