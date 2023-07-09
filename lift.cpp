#include<iostream>
using namespace std;
/*int main()
{
	int t,i=0,f=7;
	cin>>t;
	int mid=(f+i)/2;
	do
	{
		int n;
		cin>>n;
		
		if(n==mid)
		   {
              cout<<"A"<<endl;
			  i=mid;
		   }
		else if(n>mid)
		   {
			   cout<<"B"<<endl;
			   f=n;
		   }
		else 
		   { 
			   cout<<"A"<<endl; 
			   i=n;
		   }  
		   mid=(f+i)/2;
		   t--;    
	}while(t>0);
	return 0;
}*/
int main()
{
	char a[2][15];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<15;j++)
		   cin>>a[i][j];
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<15;j++)
		   cout<<a[i][j];
	}
	return 0;
}
