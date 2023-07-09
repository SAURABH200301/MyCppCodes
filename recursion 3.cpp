#include<iostream>
using namespace std;
int fact(int d)
{
	if(d==1)
	return 1;
	int ans=fact(d-1)*d;
	return ans;
}
int main()
{
	cout<<"enter the number for which you wanna find factorial"<<endl;
	int n;
	cin>>n;
	int a=fact(n);
	cout<<"factorial of "<<n<<" is "<<a<<endl;
	return 0;
}
