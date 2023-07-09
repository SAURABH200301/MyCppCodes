#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> removeDuplicates(int*a,int size)
{
	vector<int> output;
	unnordered_map<int,bool> seen;
	for(int i=0;i<size;i++)
	{
		if(seen.count(a[i])>0)
		 continue;
		seen[a[i]]=true;
		output.push_back(a[i]);
	}
	return output; 
}

int main()
{
	int s;
	cout<<"enter the size"<<endl;
	cin>>s;
	int a[s];
	for(int i=0;i<s;i++)
	{
		cin>>a[i];
	}
	vector<int> v=removeDuplicates(a,s);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	 } 
	 return 0; 
}

