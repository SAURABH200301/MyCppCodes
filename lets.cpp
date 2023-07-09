#include<iostream>
using namespace std;
int bit(int n)
{
	if(n>=0&&n<=1)
	  return 1;
	else if(n>1&&n<=3)
	  return 2;
	else if(n>3&&n<=7)
	  return 3;
	else if(n>7&&n<=14)
	  return 4;
	return 5;  
}
int main()
{
	 int t;
	 cin>>t;
	 while(t>0)
	 {
	 	int x,sum=0;cin>>x;
	 	for(int i=1;i<=x;i++)
	 	{
	 		if(bit(x/i)<=i)
	 		   sum++;
		 }
		 cout<<sum<<endl;
	 	t--;
	 }
	return 0; 
}
