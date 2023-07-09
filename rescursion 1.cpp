#include<iostream>
#include<math.h>
using namespace std;
int power(int n,int a)
{
	if(a==1)
	    return n;
	int ans=power(n,a/2);
	if(a%2==0)
	return ans*ans;
	else
	return ans*ans*n;    
}
int main()
{
	int num,e;
	cout<<"enter the number and exponent"<<endl;
	cin>>num>>e;
	int an= power(num,e);
	
	cout<<"value of "<<num<<"^"<<e<<"is "<<an;
	return 0;
	
}
