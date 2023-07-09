#include<stdio.h>
#include<conio.h>
struct person 
{
   char name[20];
   int age;
   char dob[10];
};
struct student
{
	struct person info;
	int roll_no;
	float marks;
};
int main()
{
     struct student s;
     printf("DETAILS OF STUDENTS \n");
     printf("enter the name :");
     scanf("%s \n",&s.info.name);
     printf("Enter the age:");
	 scanf("%d",&s.info.age);
	 printf("Enter the dob:");
	 scanf("%s \n",&s.info.dob);
	 printf("enter the roll no.:");
	 scanf("%d \n",&s.roll_no);
	 printf("enter the marks:");
	 scanf("%f \n",&s.marks);
	 printf("\n entered details\n");
	 printf("name os student %s \n",s.info.name);
	 printf("age of students %d \n",s.info.age);
	 printf("dob of student %s \n",s.info.dob);
	 printf("roll no of student %d \n ",s.roll_no);
	 printf("marks of student %f \n",s.marks);
	 return 0;	
}
