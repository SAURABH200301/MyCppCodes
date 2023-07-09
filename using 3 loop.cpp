#include<iostream>           //         1
#include<conio.h>            //        12
using namespace std;         //       123
int main()                   //      1234
{  
     int i,k,j;
     for(i=1;i<=4;i++)
     {
     	for(k=4;k>i;k--)
     	 cout<<" ";
		 for(j=1;j<=i;j++)
		 {
		 cout<<j;}
		 cout<<endl;
	 }
   
   return 0;
}
