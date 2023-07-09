#include<bits/stdc++.h>
using namespace std;
int buildingNum(vector<int>& h, int b, int l,int i){
        if(i>=h.size()) return h.size();
        int c=0,d=0,a=0;
        if(b==0 and l==0)
          return 0;
        if(h[i+1]>h[i]){
             if(b>=h[i+1]-h[i]) c= 1+buildingNum(h,b-(h[i+1]-h[i]),l,i+1);
             if(l) d= 1+buildingNum(h,b,l-1,i+1);
//             cout<<"c "<<c<<" d "<<d<<endl;
            return max(c,d);
        }
        else
           a= 1+ buildingNum(h,b,l,i+1);
//           cout<<"a "<<a<<endl;
       return a;
    }
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        if(bricks==0 and ladders==0)
            return 1;
        return buildingNum(heights,bricks,ladders,0);
    }
int main(){
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	int b, l;
	cin>>b>>l;
	cout<<furthestBuilding(v,b,l);
	return 0;
}
