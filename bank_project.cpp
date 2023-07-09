#include<stdio.h>
#include<process.h>
struct bank
{
	int uni_no,amount,dob,ph_n,age,type_acc;
	char name[80],add[80];
	void new_acc()
	{
		printf("ENTER THE NAME OF THE ACCOUNT HOLDER \n");
		scanf("%s \n",name);
		
		printf("ENTER THE DATE OF BIRTH \n");
		scanf("%d \n",&dob);
		
		printf("ENTER THE AGE OF THE ACCOUNT HOLDER \n");
		scanf("%d \n",&age);
		
		printf("ENTER THE UNIQUE ID \n");
		scanf("%d \n",&uni_no);
		
		printf("ENTER THE PHONE NUMBER \n");
		scanf("%d \n",&ph_n);
		
		printf("ENTER THE ADDRESS \n");
		scanf("%s \n",add);
		
		printf("PRESS NUMBER GIVEN BELOW TO CHOOSE TYPE OF THE ACCOUNT \n");
		printf("PRESS 1 FOR ACCOUNT FOR THE 1 YEAR FIXITED DEPOSITE \n PRESS 2 FOR ACCOUNT FOR THE 2 YEAR FIXITED DEPOSITE \n PRESS 3 FOR ACCOUNT FOR THE 3 YEAR FIXITED DEPOSITE \n");
		int d;
		scanf("%d \n",&d);
		
		switch(d)
		{
			case 1: type_acc=1;break;
			case 2: type_acc=2;break;
			case 3: type_acc=3;break;
			default : printf("please enter appropirate number");
		}
		printf("ENTER THE FIRST AMOUNT YOU WANNA DEPOSIT");
		scanf("%d",&amount);
	    printf("ACCOUNT HAS BEEN CREATED");
	}
	void deposit()
	{
		printf("ENTER THE AMOUNT ");
		int a;scanf("%d",&a);
		amount=amount+a;
		printf("YOUR CURRENT BALANCE IS %d",amount);
	}
	void withdraw()
	{
		printf("YOUR TOTAL ACCOUNT BALANCE IS %d",&amount);
		printf("ENTER THE AMOUNT TO WITHDRAW");
		int a;
		scanf("%d",&a);
		printf("remaining balance is %",amount-a);
	}
	void edit_add()
	{
		printf("YOUR CURRENT ADDRESS IS %[^]",add);
		printf("ENTER NEW ADDRESS ");
		scanf("%[^]",add);
	}
	void show_details()
	{
		printf("ACCOUNT HOLDER NAME IS %[^]\n ",name);
		printf("UNIQUE ID %d \n",uni_no);
		printf("TYPE OF ACCOUNT IS  \n");
		if(type_acc==1)
		printf("ACCOUNT IS FOR 1 YEAR DEPOSIT");
		else if(type_acc==2)
		printf("ACCOUNT IS FOR 2 YEAR DEPOSIT");
		else if(type_acc=3)
		printf("ACCOUNT IS FOR 3 YEAR DEPOSIT");
		printf("DATE OF BIRTH  %d \n",dob);
		printf("AGE %d \n",age);
		printf("PHONE NUMBER %d \n",ph_n);
		printf("ADDRESS %[^] \n",add);
		
	}
};
int main()
{
	int a=1;
	bank *b= new bank;
	do
	{
	printf("WELCOME TO THE BANK OF THE UNKNOWN \n");
	printf("ENTER THE NUMBER SHOWN IN THE MENU TO PERFORM THE OPERATIONS. 0 TO EXIT \n");
	printf("1. TO OPEN NEW ACCOUNT \n");
	printf("2. TO DEPOSITE THE AMOUNT \n");
	printf("3. TO WITHDRAW THE AMOUNT \n");
	printf("4. TO EDIT THE ADDRESS \n");
	printf("5. TO VIEW THE ACCOUNT DETAILS  \n");
	scanf("%d \n",&a);
	
	switch(a)
	{
		case 0: exit(0);break;
		case 1: b->new_acc();printf("\n"); break;
		
		case 2: b->deposit();printf("\n"); break;
		
		case 3: b->withdraw();printf("\n");break;
		
		case 4: b->edit_add();printf("\n");break;
		
		case 5: b->show_details();printf("\n"); break;
		
		default : printf("ENTER APPROPRIATE NUMBER \n");
	}
    }while(a!=0);
    delete b;
	return 0;
}
