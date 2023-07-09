#include<iostream>
#include<process.h>
using namespace std;
int main()
{ 
cout<<"enter any year to know is it leap year or not"<<endl;
int n,count=0;
cin>>n;
    if(n%4==0)
    {
    	if(n%100==0)
    	{
    		if(n%400==0)
    		cout<<"leap year";
    		else cout<<"not leap year";
		}
		else 
		cout<<"leap year";
	}
	else cout<<"not leap year";

	
	
	return 0;
}
