#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
	/*vector<int> a,b;
	cout<<"enter the size of array"<<endl;
	int s;cin>>s;
	for(int i=0;i<s;i++)
	{
		int r;
		cin>>r;
		a.push_back(r);
	}
	sort(a.begin(),a.end());
	cout<<"sorted array"<<endl;
	for(int i=0;i<s;i++)
	   cout<<a[i]<<" ";
	reverse(a.begin(),a.end());
	cout<<"reverse of array"<<endl;
	for(int i=0;i<s;i++)
	   cout<<a[i]<<" ";
	cout<<"max in array is "<<*max_element(a.begin(),a.end());cout<<endl;
	cout<<accumulate(a.begin(),a.end(),0)<<endl;
	//copy_n(a,a.end(),b);
	int b[6];
	
	iota(b,6,20);
	
	for(int i=0;i<6;i++)
	 cout<<b[i]<<" ";*/
	 vector<int> vect;
	 cout<<"enter 6"<<endl;
	 for(int i=0;i<6;i++)
	{
		int r;
		cin>>r;
		vect.push_back(r);
	}
	 cout<<count_if (vect.begin(), vect.end(), [](int x) 
	{ return x%2==0;} ); 
	return 0;
}
