#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];vector<int> v(0);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		v[arr[i]]++;
	}
	for(int i=v.begin();i<v.end();i++)
	  cout<<v[i];
	//sort(arr,arr+n);
	//int i=find(v.begin(), v.end() ,1);
	cout<<arr[i];
	return 0;
}
