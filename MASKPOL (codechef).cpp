#include<bits/stdc++.h>
using namespace std;
void print(int n,int a){
	if((n-a)>a) cout<<a<<endl;
	else  cout<<n-a<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a;
		cin>>n>>a;
		if(n>a) print(n,a);
	}
	return 0;
}
