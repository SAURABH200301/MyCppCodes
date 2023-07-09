#include<bits/stdc++.h>
using namespace std;
//int filledOrders(vector<int> order, int k) {
//      int filled=0;
//      int n=order.size();
//      sort(order.begin(),order.end());
//      for(int i=0;i<n;i++){
//          if(k<=0) break;
//          if(order[i]<=k){
//              filled++;
//              k-=order[i];
//          }
//      }
//      return filled;
//}
int maxCost(vector<int> cost, vector<string> labels, int dailyCount) {
    int costMet=0,temp=0;
    int j=0;
    for(int i=0;i<cost.size();i++){
        if(j==dailyCount){
            costMet=max(temp,costMet);
            temp=0;
            j=0;
        }
        if(labels[i]=="legal")
            j++;
        temp+=cost[i];
    }
    return costMet;
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	vector<string> s;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		s.push_back(str);
//        v.insert(v.begin()+i,str);
	}
	int dC;
	cin>>dC;
	cout<<maxCost(v,s,dC);
	return 0;
}
