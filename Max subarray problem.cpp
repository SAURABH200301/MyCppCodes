#include<bits/stdc++.h>
using namespace std;
int FindMaxCross(vector<int> v,int low,int mid,int high){
	int left_sum=INT_MIN,right_sum=INT_MIN;
	int sum=0;
	for(int i=0;i<=mid;i++){
		sum+=v[i];
		if(left_sum<sum){
			left_sum=sum;
		}
	}
	sum=0;
	for(int i=mid+1;i<high;i++){
		sum+=v[i];
		if(right_sum<sum)
		  	right_sum=sum;
	}
	return max(max(left_sum,right_sum),left_sum+right_sum);
}
int FindMaxSubarray(vector<int> v,int low,int high){
	if(high==low) return (max(max(low,high),v[low]));
	else{
		int mid =(low+high)/2;
		return 	max(
				max(FindMaxSubarray(v,low,mid),
				FindMaxSubarray(v,mid+1,high)),
				FindMaxCross(v,low,mid,high)
				);
	}
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	int ans= FindMaxSubarray(v,0,n);
	return 0;
}
