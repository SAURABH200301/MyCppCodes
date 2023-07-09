#include<bits/stdc++.h>
using namespace std;

int maxScoreSightseeingPair(vector<int> v){
	int n=v.size();
	int maxGain=INT_MIN;
	int maxEndR= v[n-1]-(n-1);
	for(int i=n-2;i>=0;i--){
		maxEndR = max(maxEndR,v[i+1]-(i+1));
		maxGain = max(maxGain,v[i]+i+maxEndR);
	}
	return maxGain;
//	---------------------------------------------
//	if(v.size()==2){
//		return v[0]+v[1]-1;
//	}
//	int i=0,j=v.size()-1;
//	int maxi=0;
//    while(i<j){
//    	if(v[i]==0 or v[i]<0){
//    		i++;
//		}
//		if(v[j]==0 or v[j]<0){
//			j--;
//		}
//		if(i!=(i+j)/2)
//	    	maxi=max(max(v[i]+v[j]+i-j,v[i]+v[(i+j)/2]+i-(i+j)/2),maxi);
//	    else
//	       maxi=max(v[i]+v[j]+i-j,maxi);
//		cout<<maxi<<endl;
//		i++;
//	}
//	return maxi;
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<maxScoreSightseeingPair(v);
	return 0;
}
