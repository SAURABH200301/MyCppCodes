#include<bits/stdc++.h>
using namespace std;
	
int main(){
	vector<int> v1,v2,v3;
	int s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<s1;i++){
		int a;cin>>a;v1.push_back(a);
	}
	for(int i=0;i<s2;i++){
		  int a;cin>>a;v2.push_back(a);
	}
	
	
	int i=0,j=0;
	while(i!=v1.size() and j!=v2.size()){
		if(v1[i]<=v2[j]){
			v3.push_back(v1[i]);
			cout<<"i"<<endl;
			i++;
		}else{
			v3.push_back(v2[j]);
			cout<<"j"<<endl;
			j++;
		}
	}
	while(i!=v1.size()){
		v3.push_back(v1[i]);
			i++;
	}
    while(j!=v2.size()){
		v3.push_back(v2[j]);
			j++;
	}
	for(int i=0;i<v3.size();i++)
	 cout<<v3[i]<<" ";
	 cout<<endl;
	if(v3.size()%2==0){
		cout<<v3[v3.size()/2]<<" "<<v3[v3.size()/2-1]<<endl;
		double a=float(v3[v3.size()/2]+v3[v3.size()/2-1])/2;
		cout<<a	<<"abc";
	}
	else{
//		cout<<v3.size()<<endl;
		cout<<v3[v3.size()/2]<<"xyz";
	}
	return 0;
}
