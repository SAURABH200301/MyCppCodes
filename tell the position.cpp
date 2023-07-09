#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
	int n;string s;
	cin>>n;
	map<int,string> sett;
	while(n--)
	{
		int arr[3],sum=0;
		cin>>s;
		for(int i=0;i<3;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		sett.insert(pair<int,string>(sum,s));
	}
	int i=1;
	map<int,string> :: reverse_iterator it;
	for(it=sett.rbegin();it!=sett.rend();it++)
	{
		cout<<i<<" "<<it->second<<endl;i++;
	}
	return 0;
}
