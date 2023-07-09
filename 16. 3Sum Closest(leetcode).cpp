#include<bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int> v,int target){
	int leftClosest= 0;
	int rightClosest=0;
	sort(v.begin(),v.end());
	int n=v.size();
//	cout<<n<<endl;
	for(int i=0;i<n;i++){
//		cout<<"hy"<<endl;
		int start=i+1,end=n-1;
		while(start<end){
			int sum=v[i]+v[start]+v[end];
			if(sum==target) return target;
			else if(sum<target){
				start++;
				if(target-sum<leftClosest and sum>0)
				  leftClosest=sum;
//				cout<<sum<<" "<<target<<endl;
		    }else{
		    	end--;
		    	if(sum-target<rightClosest)
		    	  rightClosest=sum;
			}
		}
//		cout<<leftClosest<<"l : r"<<rightClosest<<endl;
	}
	cout<<leftClosest<<"l : r"<<rightClosest<<endl;
	if(rightClosest-target<leftClosest-target)
	   return rightClosest;
	else
	   return leftClosest;
//	return min(rightClosest,leftClosest);
}
int main(){
	int n,t;
	cin>>n>>t;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<threeSumClosest(v,t);
	return 0;
}
