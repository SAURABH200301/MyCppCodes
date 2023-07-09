#include<bits/stdc++.h>
using namespace std;
void printRevursive(string s,int n)
{
	if(n>s.length()||n==0)
	{
		return;
	}
	cout<<s[0];
	s.erase(0,1);
	printRevursive(s,n-1);
}
int main()
{
	string s; int n;
	cout<<"enter the string"<<endl;
	getline(cin,s);
	cout<<"enter the number of letter which have to be printed"<<endl;
	cin>>n;
	printRevursive(s,n);
	return 0;
}
