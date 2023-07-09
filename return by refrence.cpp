#include<iostream>
using namespace std;
int &fun(int &a)
{
	cout<<a<<endl;
	return a;
}
int main()
{
	int x=10;
	//fun(x)=25;
	//cout<<x<<endl;
	cout<<fun(x);              // confusion y fun() is called two times
	return 0;
}
