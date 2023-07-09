#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,sum=0,summ=0;
	cin>>t;
	vector<int> a;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		a.push_back(n);
		sum+=a[i];
	}
	sort(a.begin(),a.end());
	for(int i=0;i<=t/2;i++){
		summ+=a[i];
	}
	cout<<summ<<" "<<sum<<endl;
	if(summ>sum-summ)
	  cout<<t-t/2;
	else
	  cout<<t;
	return 0;
}
