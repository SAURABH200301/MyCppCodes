#include<bits/stdc++.h>
using namespace std;
long largestRectangle(vector<long> h){
	if(is_sorted(h.begin(),h.end())){
		long MaxArea= h[h.size()/2]*((h.size()%2)?h.size()/2+1:h.size()/2);
// 		cout<<h[h.size()/2]<<" "<<h.size()/2+1<<" "<<area<<endl;
    	for(long i=h.size()/2;i<h.size();i++){
    	    long j=(h.size()-i)*h[i];
    		MaxArea=max(MaxArea,j);
    	}
	return MaxArea;
	}
	long area=h[0];
	long height=h[0];
	 for(int i=1;i<h.size();i++){
	 	 height= min(height,h[i]);
	 	 area= max(area,height*(i+1));
	 }
	 long Area=h[h.size()-1];
	 long Height=Area;
	 for(int i=h.size()-2;i>=0;i--){
	 	Height= min(Height,h[i]);
	 	long NewArea=Height*(h.size()-i+1);
	 	 Area= max(Area,NewArea);
	 }
	 return max(area,Area);
}
int main(){
	int n;
	cin>>n;
	vector<long> v;
	for(int i=0;i<n;i++){
		long a;cin>>a;
		v.push_back(a);
	}
	cout<<largestRectangle(v);
	return 0;
}
