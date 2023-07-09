#include<bits/stdc++.h>
using namespace std;
void dupi(int a[],int n){
//	vector<int> v;
//	sort(a,a+n);
//	int num=a[0];
//	for(int i=1;i<n;i++){
//		auto it = find(v.begin(),v.end(),a[i]);
//		if(num==a[i] and it==v.end()){
//			v.push_back(num);
//			num=a[i+1];
//			i++;
//		}
//		else
//		  num=a[i];
//	}
vector<int> v;
	    for(int i=0;i<n;i++){
	        int index=a[i]%n;
	        a[index]+=n;
	    }
	    for(int i=0;i<n;i++){
	        if((a[i]/2)>2)
	          v.push_back();
	    }
	if(v.empty())
	  cout<<-1<<endl;
	for(int i=0;i<v.size();i++)
	   cout<<v[i]<<" ";
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	  cin>>a[i];
    dupi(a,n);
	return 0;
}
