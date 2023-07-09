#include<bits/stdc++.h>
#include <algorithm>
#include <bits/stl_algobase.h>
typedef long long ll;
using namespace std;
ll maxSubarrayproduct(ll ar[],ll n)
{
	ll max_ending_here=1;
	ll min_ending_here=1;
	ll max_so_far=0;
	
	for(int i=0;i<n;i++)
	{
		if(ar[i]>0)
		{
			max_ending_here*=ar[i];
			min_ending_here=min(min_ending_here,1);
		}
		else if(ar[i]==0)
		{
			max_ending_here=1;
			min_ending_here=0;
		}
		else
		{
			int temp=max_ending_here;
			max_ending_here=max(min_ending_here*ar[i],1);
			min_ending_here=temp*ar[i];
		}
		max_so_far=max(max_so_far,max_ending_here);
	}
	return max_so_far;
}
int main()
{
	ll n;
	cin>>n;
    ll ar[n];
	for(int i=0;i<n;i++)
	  cin>>ar[i];
	cout<<"max sub product is"<<maxSubarrayproduct(ar,n)<<endl;
	return 0;
}
