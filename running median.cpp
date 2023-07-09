#include<bits/stdc++.h>
using namespace std;
float median(vector<float> v)
{
	if(v.size()%2==0)
	{
		float a=(v[v.size()/2]+v[v.size()/2-1])/2;
		return a;
	}
	else{
		return float(v[v.size()/2]);
	}
}
int main()
{
	int n;
	cin>>n;
	vector<float> v,v2;
	for(int i=0;i<n;i++)
	{
		float a;cin>>a;
		v.push_back(a);
	}
	v2.push_back(v[0]);
	for(int i=1;i<n;i++)
	{
	    vector<float> vec;
	    vec = std::vector<float>(v.begin() , v.end()+i-n+1);
	    sort(vec.begin(),vec.end());
	    float a=median(vec);
	    v2.push_back(a);
	}	
    for(int i=0;i<v2.size();i++)
      cout<<v2[i]<<"\n";
     return 0;
}
