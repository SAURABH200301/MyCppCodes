#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    int count=0;
	    vector<int> v;
	    map<int,int> m;
	    for(int i=0;i<n;i++){
	        int a;cin>>a;
	        m[a]++;
	        v.push_back(a);
	    }
	    if(is_sorted(v.begin(),v.end()) and (v[0]>v[v[v.size()-1]]))
	        cout<<-1<<endl;
	    else if(is_sorted(v.begin(),v.end()))
	        cout<<n-1<<endl;
	    else{
	        count=0;
	        for(int i=0;i<n/2;i++){
	            if(v[i]<v[n-i-1]){
	                count+=v[n-i-1]-v[i];
	            }else{
	                count=-1;
	                cout<<-1<<endl;
	                break;
	            }
	        }
	        if(count!=-1) cout<<count<<endl;
	    }
	}
	return 0;
}

