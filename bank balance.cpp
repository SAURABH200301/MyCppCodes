#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float acc_b;
	int cash;
	cin>>cash>>acc_b;
	if(cash>acc_b)
	{
		cout<<acc_b<<endl;
	}
	else if(cash %5!=0)
	cout<<acc_b<<endl;
	else
	{cout << fixed << setprecision(2);
		
		cout<<(float)acc_b-(cash+0.5);
	}
	return 0;

