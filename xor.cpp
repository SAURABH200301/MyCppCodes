#include<iostream>
#include<math.h>
using namespace std;

void binary(int n,int m,int arr[],int j)
{
	int b[16]={0},a[16]={0},C[16]={0};
 	for(int i=15;i>=0;i--)
 	{
 		b[i] =n%2;
 		n=n/2;
 		a[i] =m%2;
 		m=m/2;
 	}
 	/*cout<<"b";
 	for(int i=0;i<15;i++)
 	cout<<b[i];
 	cout<<endl;
 	cout<<"a";
 	for(int i=0;i<15;i++)
 	cout<<a[i];
 	cout<<endl;*/
 	for(int i=0;i<16;i++)
		      {
		      	if(a[i]==b[i])
		      	{
		      		C[i]=0; 
				  }
				  else 
				  {
				  	C[i]=1;
				  }
			  }
		for(int u=0;u<16;u++)              //coverts binary to decimal
			{
				arr[j]=arr[j]+C[u]*pow(2,15-u);
			}  
			
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int size;
	    cin>>size;
	    int arr[size];
	    for(int i=0;i<size;i++)
	       cin>>arr[i];
	    int B[size]={0};   
	    for(int i=0;i<size-1;i++)   //because last one is not comparing size-1
		{
		     	binary(arr[i],arr[i+1],B,i);
		     	
		}   
		binary(arr[0],arr[size-1],B,size-1);
	t--;
	int small=B[0];
	for(int i=1;i<size;i++)
	  {
	  	if(small>B[i])
	  	  small=B[i];
	  }
	  cout<<small<<endl;
	}
	/*for(int i=0;i<5;i++)
	cout<<B[i]<<" ";
	cout<<endl;*/
	
	return 0;
}
