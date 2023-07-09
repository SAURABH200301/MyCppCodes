#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
	    int a;
	    cin>>a;
	    v.push_back(a);
	}
	  int sumP=v[0]+v[1];
	  for(int i=2;i<n;i++){
	  	 if(sumP>(v[i-1]+v[i]))
	  	    sumP=v[i-1]+v[i];
	  }
	 cout<<sumP<<endl;
	}
	return 0;
}

