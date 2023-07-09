#include<iostream>
using namespace std;
template <typename t>
t mul(t x,t y)
{
	return x*y;
}
int main()
{
	cout<<"enter any two no. to multiple (int)"<<endl;
	int a,b;
	cin>>a>>b;
	cout<<"result "<<mul(a,b)<<endl;
	cout<<"enter any two number to multiple (float)"<<endl;
	float c,d;
	cin>>c>>d;
	cout<<"result "<<mul(c,d);
	return 0;
}
