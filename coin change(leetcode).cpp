#include<bits/stdc++.h>
using namespace std;
int coins(set<int,greater<int>> s,int amount,int count){
	if(amount<0)return 0;
	cout<<amount<<endl;
	auto it= s.begin();
	if(amount%(*it)!=0){
		count += amount / *it;
		amount=amount%(*it);
	}
	s.erase(it);
	int ans=coins(s,amount,count);
	return ans;
}
int coinChange(vector<int> v,int amount){
//	use set to store the coins,stores in decending order,
//	will run the loop and start dividing the amount and get the remaining 
//	if remaining is in the set then put it in and check for amount is 0 or not
//	if remaining is not in the set then search for the num less then that and check if that num can satisfy or not.
    set<int,greater<int>> s;
    for(int i=0;i<v.size();i++){
    	s.insert(v[i]);
	}
    int ans= coins(s,amount,0);
	return ans;	
}
int main(){
	int n,amount;
	cin>>n>>amount;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<coinChange(v,amount);
	return 0;
}
