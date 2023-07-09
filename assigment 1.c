#include<stdio.h>
int main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
	scanf("%d",&arr[i]);
	int small=arr[0],large=arr[0];
	for(i=1;i<5;i++)
	{
		if(small>arr[i])
		  small=arr[i];
		if(large<arr[i])
		  large=arr[i];
	}
	printf("small=%d large=%d",small,large);
	return 0;
}
