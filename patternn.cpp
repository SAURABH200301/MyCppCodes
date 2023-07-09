#include<bits/stdc++.h>
using namespace std;
//time complexity O(n^2)
int main(){
	int n;
	cin>>n;
	int num=10;
	for(int i =0;i<n;i++){
		for(int j=0;j<=i;j++){
		   cout<<num<<" ";
		   num++;
		}
		num++;
		cout<<endl;
	}
	return 0;
}
