#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool numgreater_k(vector<ll> arr,ll k)
{
	for(ll i=0;i<arr.size();i++)
	{
		if(arr[i]<k)
		 return false;
	}
	return true;
}
ll operation(ll num1,ll num2)
{
	if(num1>num2)
	{
		return num2+2*num1;
    }
	else
	  return num1+2*num2;
}
int main()
{
	ll n,k,count=0;;
	cin>>n>>k;
	vector<ll> arr(n);
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	reverse(arr.begin(),arr.end());
	while(!numgreater_k(arr,k))
	{
		count++;
		ll num1=arr.back();
		arr.pop_back();
		ll num2=arr.back();
		arr.pop_back();
		ll new_num=operation(num1,num2);
		arr.push_back(new_num);
		sort(arr.begin(),arr.end());
	    reverse(arr.begin(),arr.end());
	}
	cout<<count<<endl;
	return 0;
}
