#include<iostream>
using namespace std;
int main()
{  
	int n,r=0,d;
    cin>>n;
    while(n!=0)
	{ 
       d=n%10;
       r=r*10+d;
       n/=10;
    }
	   cout<<"output="<<r<<endl;
	return 0;	  
}
