#include<bits/stdc++.h>
using namespace std;
int jumpingOnClouds(vector<int> c)
{
	//cout<<c.size()<<endl;
	int min=0;
	for(int i=0;i<c.size()-1;)
	{
		if(c[i+2]!=1)
		{
			//cout<<"two"<<i<<endl;
			min++;
			i=i+2;
			//cout<<"two"<<i<<endl<<endl;
		}
		else{
			//cout<<"one"<<i<<endl;
			min++;
			i=i+1;
			//cout<<"one"<<i<<endl<<endl;
		}
	}
	return min;
}
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	 {
	 	int a;
	 	cin>>a;
	 	v.push_back(a);
     }
	int min=jumpingOnClouds(v);
	cout<<min;
	return 0;
}
