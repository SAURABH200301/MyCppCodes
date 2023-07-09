#include<iostream>
#include<math.h>
using namespace std;
int divide(int ar[],int a,int arr[])
{
	int k=0;
	for(int i=0;i<a;i++)
	{
		int l=0;
		while(ar[i]>0)
		{
			l=ar[i]%10;
			ar[i]=ar[i]/10;
		}
		
		arr[k]=l;k++;
	}
	return k;
	
}
int main()
{
	int a;
	cin>>a;
	int arr[a],myarr[a];
	for(int i=0;i<a;i++)
	    cin>>arr[i];
	int b=a/2;
	 int f=divide(arr,b,myarr);
	 for(int i=b;i<a;i++)
	 {  
	    int j=0;
	 	while(j!=1)
	 	{
	 		int s=arr[i]%10;
	 		
	 		myarr[f]=s;f++;
	 		j++;
		 }
	 }
	 for(int i=0;i<a;i++)
	 {
	 	cout<<myarr[i];
	 }
	 int num=0;
	 for(int i=0;i<a;i++)
	 {
	 	num=num+myarr[i]*pow(10,a-i);
	 }
	 cout<<num;
	 if(num%11==0)
	 cout<<"OUI";
	 else
	 cout<<"NON";  
	 
	 return 0;    
}
