#include<stdio.h>
#include<conio.h>                    //LINEAR SEARCH
int main()
{
	int a[10000],i,n,key;
	printf("enter size of array ");
	scanf("%d",&n);
	printf("enter the elements of array ");
	for( i=0;i<n;i++)
	  scanf("%d",&a[i]);
	printf("ente the key ");
	scanf("%d",&key);
	for( i=0;i<n;i++)
	  {
	  	if(a[i]==key)
	  	 {
		   printf("element found at %d",i+1);
	  	 return 0;}
	  }
	  printf("element not found" );
	  return 0;
}
