#include<iostream>
using namespace std;
int main()
{
	int n,fact=1;
	cout<<"enter the number for which you wanna find factorial"<<endl;
	cin>>n;
	int i=n;
	while(i!=1)
	{
	     fact=fact*i;
		 i--;	
	}
	cout<<"factorial of "<<n<<" is "<<fact;
	return 0;
}
