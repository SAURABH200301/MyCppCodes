#include<iostream>
#include<string.h>
using namespace std;
class empy
{
	string name;
	int empy_id;
    public :
	int getid(){return empy_id;}
	void setid(int a){empy_id=a;};
	string  getname(){return name;}
	void setname(string s){name =s;}
};
class f_empy:public empy
{
	int salary,batch_no;
	public:
	int getsal(){return salary;}
	void setsal(int a){salary=a;}
	int getbat(){return batch_no;}
	void setbat(int a){batch_no=a;}
};
class p_empy : public empy
{
	int daily_wage,batch_n;
	public:
		int getwa(){return daily_wage;}
		void setwa(int a){daily_wage=a;}
		int getba(){return batch_n;}
		void setba(int a){batch_n=a;}
};
int main()
{
	string y,e;
	f_empy f;p_empy p;int a=1,m,g,h;
	while(a>0)
    {
    	 
    	 	
	cout<<"WELCOME TO MYCOMPANY LTM"<<endl;
    cout<<"TO ENTER THE DETAILS OF FULL TIME EMPLOYEE  PRESS 1"<<endl;
    cout<<"TO ENTER THE DETAILS OF PART TIME EMPLOYEE PRESS 2"<<endl;
    cout<<"TO KNOW ABOUT FULL TIME EMPLOYEE PRESS 3"<<endl;
    cout<<"TO KNOW ABOUT PART TIME EMPLOYEE PRESS 4"<<endl;
    cout<<"TO EXIT PRESS 5"<<endl;
    cin>>m;
    switch (m)
    {
    	case 1: cout<<"enter name"<<endl;
		         while(y.length()==0){
                 getline(cin,y);
                 }
				 f.setname(y);
				 cout<<"enter employee id"<<endl;
				 cin>>g;
				 f.setid(g);
				 cout<<"enter the salary"<<endl;
				 cin>>g;
				 f.setsal(g);
				 cout<<"enter batch no"<<endl;
				 cin>>g;
				 f.setbat(g);
				 
				 break;
		case 2:  cout<<"enter name"<<endl;
		         while(e.length()==0){
                 getline(cin,e);
                 }
				 p.setname(e);
				 cout<<"enter employee id"<<endl;
				 
				 cin>>h;
				 p.setid(h);
				 cout<<"enter the daily wage"<<endl;
				 cin>>h;
				 p.setwa(h);
				 cout<<"enter batch no"<<endl;
				 cin>>h;
				 p.setba(h);
				 break;	
		case 3: cout<<"DETAIL OF FULL TIME EMPLOYEE "<<endl;
		        cout<<"NAME OF EMPLOYEE IS "<<f.getname()<<endl;
				cout<<"BATCH NO. IS "<<f.getbat()<<endl;
				cout<<"SALARY IS "<<f.getsal()<<endl;
				cout<<"EMPLOYEE ID IS "<<f.getid()<<endl;
				break;
		case 4: cout<<"DETAIL OF PART TIME EMPLOYEE "<<endl;
		        cout<<"NAME OF EMPLOYEE IS "<<p.getname()<<endl;
				cout<<"BATCH NO. IS "<<p.getba()<<endl;
				cout<<"DAILY WAGE IS  "<<p.getwa()<<endl;
				cout<<"EMPLOYEE ID IS "<<p.getid()<<endl;
				break;	
		case 5:  a=-1;
		         break;
	    default :
		       cout<<"YOU ENTERED WRONG OPTION . :) THANK YOU VISIT AGAIN "<<endl;
			   a=-1;
			   break;			 					 	  
	}
    } 
}
