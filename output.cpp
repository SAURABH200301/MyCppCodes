#include<iostream>
using namespace std;
void fun(int p)
{
	cout<<p<<" ";
}
int main()
{
	int i=10;
	int&p=i;
	fun(p++);   //here p first use as printed as 10 then incremented printed as 11 in i
	cout<<i;
	return 0;
}
