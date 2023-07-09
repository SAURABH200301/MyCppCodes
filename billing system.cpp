#include<bits/stdc++.h>	
using namespace std;
class billing
{
  int fee,salary,clas,roll_no,u_id; 
  string date,name;
  public:
  int getfee()	 //TO GET FEE
   {return fee;}
   
   void setfee(int f) //TO SET FEE
   {fee=f;}
   
   int getsalary()   //TO GET SALARY
   {return salary;}
   
   void setsalary(int s)  //TO SET SALARY
   { salary=s;}
   
   void set_date(int d,int m,int y)  //TO SET DATE
   { date.push_back(d);
    date.push_back('\'');
    date.push_back(m);
    date.push_back('\'');
    date.push_back(y);
   }
   string getdate()   //TO GET DATE
   { return date;}
   
   void setroll(int r)  //TP SET ROLL NO.
   { roll_no=r;}
   
   int getroll()    //TO GET ROLL NO.
   {return roll_no;}
   
   void setu_id(int r)  //TP SET UNIQUE ID
   { u_id=r;}
   
   int getu_id()   //TO GET UNIQUE ID
   {return u_id;}
   
   /*void setname(string n)  //TO SET NAME
   { name.copy(n,n.length());}*/
   
   string getname()  //TO GET NAME
   { return name;}
   
   void set_class(int c)
   { if(1<=c<=12)
       clas=c;
	 else
	   cout<<"recheck your enties"<<endl;}
   
   int get_class()
   {return clas;}
   
   //FUNCTIONS
   void start()
   {
   	int a=10;
   	do
   	{
   	cout<<"WELCOME TO MY SCHOOL"<<endl;
   	cout<<"SELECT THE DEPARMENT "<<endl;
   	cout<<"1. FOR STUDENT"<<endl;
   	cout<<"2. FOR TEACHER"<<endl;
   	cout<<"0. TO EXIT"<<endl;
   	cin>>a;
   	switch(a)
   	{
   		case 0: exit(0);
   		case 1: student();break;
   		//case 2: teacher(); break;
   		default : cout<<"PLEASE ENTER VALID NUMBER"<<endl;
	}
    }while(a!=0);
   }
   void student()
   {
   	 system("cls");
   	 int a=10;
   	 do
   	 {
   	 	cout<<"SELECT THE OPTION GIVEN BELOW"<<endl;
   	 	cout<<"1. TO ENTER NEW RECORD"<<endl;
   	 	cout<<"2. TO CHECK FOR RECORD"<<endl;
   	 	cout<<"3. TO SEARCH RECORD"<<endl;
   	 	cout<<"4. TO MODIFY RECORD"<<endl;
   	 	cout<<"5. TO DELETE RECORD"<<endl;
   	 	cout<<"0. TO RETURN TO MAIN MENU"<<endl;
   	 	cin>>a;
   	 	switch(a)
			{
   	 		   case 0: return ; break;
   	 		   case 1: new_record();break;
   	 		   /*case 2: ch_record(); break;
   	 		   case 3: search_re();break;
   	 		   case 4: mod_rec(); break;
   	 		   case 5: del_rec(); break;*/
   	 		   default : cout<<"ENTER VALID OPTIONS"<<endl;
			}
	 }while(a!=0);
   }
   int annual_fee(int c)
   {
   	 if(1<=c<=5)
   	   return 90000;
   	 if(c<=10)
   	   return 130000;
   	 else
   	   return 150000;
   	}
   void new_record()
   {
   	system("cls");
   	 cout<<"                 NEW RECORD DETAILS"<<endl;
   	 cout<<"ENTER THE NAME OF THE STUDENT"<<endl;
   	 string s;getline(cin,s);//setname(s); cin.ignore();
   	 cout<<"ENTER STUDENTS DATE OF BIRTH(FIRST ENTER DATE THEN MONTH THEN YEAR )"<<endl;
   	 int d,m,y;cin>>d>>m>>y;set_date(d,m,y);
   	 cout<<"ENTER THE CLASS"<<endl;
   	 int c;cin>>c;set_class(c);
   	 cout<<"ENTER YOUR CLASS ROLL NO."<<endl;
   	 int r;cin>>r;setroll(r);
   	 cout<<"ENTER YOUR UNIQUE ID"<<endl;
   	 int u;cin>>u;setu_id(u);
   	 fee=annual_fee(c);
   	 cout<<"YOUR ANNUAL FEES IS :-"<<fee<<endl;
   	 
   }
};
int main()
{
	 billing b;
	 b.start();
	 return 0;
}
