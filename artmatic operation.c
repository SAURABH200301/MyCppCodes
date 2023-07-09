#include<stdio.h>
#include<conio.h>
void operation(int n,int m,char ch)
{
	switch(ch)
	{
		case '+': printf("addition function is called %d",n+m);break;
		case '-': printf("subraction function is called %d",n-m);break;
		case '*': printf("multiplication function is called %d",n*m);break;
		case '/': printf("division function is called %d",n/m);break;
		case '%': printf("modulus function is called %d",n%m);break;
	}
}
int main()
{
	//clrscr();
	printf("enter two numbers");
	scanf("%d %d",&n,&m);
	printf("enter the operater ");
	scanf("%c",&ch);
	if(n>m)
	operation(n,m,ch);
	else
	operation(m,n,ch);
	getch();
	return 0;
}
