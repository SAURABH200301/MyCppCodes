#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a;
		for(int i=0;i<n;i++)
		 a.push_back(i+1);
		reverse(a.begin(),a.end());
	    for(int i=0;i<n;i++)
	      cout<<a[i]<<" ";
	    cout<<endl;
		n--;
		int j=0;
		while(n--){
			swap(a[j],a[j+1]);
			for(auto it: a)
			  cout<<it<<" ";
			cout<<endl;
			swap(a[j],a[j+1]);
			j++;
		}
	}
	return 0;
}
