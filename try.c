#include<stdio.h>
int main()
{
	char *ptr="GATE2021";
	printf("%cn",*&*&*ptr);
	return 0;
}
