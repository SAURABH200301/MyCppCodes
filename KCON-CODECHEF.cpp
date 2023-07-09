#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll kadane(int *arr,int n)
{
	ll current_sum=0;
	ll best_sum=INT_MIN;
	for(int i=0;i<n;i++)
	{
		current_sum+=arr[i];
		if(best_sum<current_sum)
		 best_sum=current_sum;
		if(current_sum<0)
		{
		
			current_sum=0;
			
		}
	}
	return best_sum;
}
ll maxsubarraysum(int ar[],int n,int k)
{
	ll kadanes_sum=kadane(ar,n);
	if(k==1)
	  return kadanes_sum;
	
	ll cur_pre_sum=0,cur_suf_sum=0;
	ll max_pre_sum=INT_MIN,max_suf_sum=INT_MIN;;
	
	for(int i=0;i<n;i++)
	{
		cur_pre_sum+=ar[i];
		max_pre_sum=max(cur_pre_sum,max_pre_sum);
	}
	ll totalSum=cur_pre_sum;
	
	for(int i=n-1;i>=0;i--)
	{
		cur_suf_sum+=ar[i];
		max_suf_sum=max(cur_suf_sum,max_suf_sum);
	}
	ll ans;
	if(totalSum<0)
	{
		ans=max(max_suf_sum+max_pre_sum,kadanes_sum);
	}
	else
	{
		ans=max(max_suf_sum+max_pre_sum+totalSum*(k-2),kadanes_sum);
	}
	return ans;
}
int main()
{
	int t;
	cin>>t;
	{
		while(t--)
		{
		    int n,k;
			cin>>n>>k;
			int ar[n];
			for(int i=0;i<n;i++)
			   cin>>ar[i];
			cout<<maxsubarraysum(ar,n,k)<<endl;	
		}
	}
	return 0;
}
