#include<stdio.h>
int main()
{
	char a[100],b[100],i;
	printf("enter the first string \n");
	gets(a);
	printf("enter the second string \n");
	gets(b);
	char *ptr=a;
	char*ptr1=b;
	while(*ptr!='\0')
	{
		if(*ptr!=*ptr1)
		{
			printf("string is not same \n");
			return 0;
		}
		*ptr++;*ptr1++;
	}
	printf("strings are same");
	return 0;
}
