//the question replaces the 0 with 5 in any number

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long n,num=0,a,count=0;
	cin>>n;
	
	while(n>0)
	{
		a=n%10;
		n=n/10;
		if(a==0)
		num=num+pow(10,count)*5;
		else 
		num=num+pow(10,count)*a;
		count++;
	}
	
	cout<<num;
	return 0;
}
