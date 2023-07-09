#include<bits/stdc++.h>
using namespace std;

int main(){
	 vector<int> v;
//	 cout<<v.max_size()<<endl;
//	 cout<<v.capacity()<<endl;
//		 int n;
//	 v.resize(n);
//	 cout<<v.capacity()<<endl;
	 v.push_back(2);
	 v.push_back(3);
	 v.push_back(4);
	 v.push_back(5);
	 for(int i=0;i<v.size();i++)
	   cout<<v[i]<<" ";
	   
	cout<<endl;
	reverse(v.begin(),v.end());
	 for(int i=0;i<v.size();i++)
	   cout<<v[i]<<" ";
//	 cout<<v.empty()<<endl;
	return 0;
}
