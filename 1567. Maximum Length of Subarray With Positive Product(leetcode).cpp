#include<bits/stdc++.h>
using namespace std;
int getMaxLen(vector<int> arr){
	int N=arr.size();
    int Pos = 0;
    int Neg = 0;
    int res = 0;
 
    for (int i = 0; i < N; i++) {
 
        if (arr[i] == 0) {
            Pos = Neg = 0;
        }
        else if (arr[i] > 0) {
            Pos += 1;
            if (Neg != 0) {
                Neg += 1;
            }
            res = max(res, Pos);
        }
        else {
 
            swap(Pos, Neg);
            Neg += 1;
            if (Pos != 0) {
 
                Pos += 1;
            }
            res = max(res, Pos);
        }
    }
    return res;
	
//-----------------------------------------------	
//	int n=v.size();
//	int ans=0;
//	for(int i=0;i<n;i++){
//		int s=i;
//		while(s<n&& v[s]==0)s++;
//		int e=s;
//		int c=0;
//		int sn=-1,en=-1;
//		while(e<n&&v[e]!=0){
//			if(v[e]<0){
//				c++;
//				if(sn==-1)sn=e;
//				en=e;
//			}
//			e++;
//		}
//		if(c%2==0)ans=max(ans,e-sn-1);
//		else{
//			if(sn!=-1)ans=max(ans,e-sn-1);
//			if(en!=-1)ans=max(ans,en-s);
//		}
//		i=e+1;
//	}
//	return ans;
//-----------------------------------------------------
//	int maxGot=0,index0=0,st=1;
//	
//	for(int i=0;i<v.size();i++){
//		if(v[i]==0) {
//			st=1;
//			index0=i+1;
//			continue;
//		}
//		if(st<0)
//		  st=1;
//		st*=v[i];
//		if(st>0)
//		  maxGot=max(maxGot,i+1-index0);
//	}
//	return maxGot;
}
int main(){
	int n;
	cin>>n;
	vector <int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<getMaxLen(v);
	return 0;
}
