#include<iostream>
#include<string.h>
using namespace std;
class student
{
	string name;
	int roll;
	int m[3];
	char grade;
	int total;
	public:
	string getname();
	void setname(string);
	int getroll();
	int setroll(int);
	void set_marks(int,int,int);
	void get_marks();
	int get_total();
	char get_grade();
};
int student::getroll()
{
	return roll;
}
int student::setroll(int a)
{
	roll=a;
}
void student::get_marks()
{
	for(int i=0;i<3;i++)
	{
		cout<<"marks in "<<i+1<<" subject is  "<<m[i]<<" "<<endl;
		
	}
}
void student::set_marks(int a,int b,int c)
{
	m[0]=a;m[1]=b;m[2]=c;
}
int student::get_total()
{
	int sum=0;
	for(int i=0;i<3;i++)
	{
		sum+=m[i];
	}
	total=sum;
	return sum;
	
}
char student::get_grade()
{
	if(total>250)
	{
		grade='A';
		return 'A';
	}
	else if(total>200)
	{
		grade='B';
		return 'B';
	}
	else if(total>150)
	{
		grade='C';
		return 'C';
	}
	else 
	{
		grade='D';
		return 'D';
    
	}
	}
string student::getname()
{
	return name;
}
void student::setname(string s)
{
	name=s;;
}
int main()
{
	student s;
	string a;
    cout<<"enter your name"<<endl;
    getline(cin,a);
    
    s.setname(a);
    cout<<"enter your roll no."<<endl;
    int r;
    cin>>r;
    s.setroll(r);
    cout<<"enter marks in 3 subs"<<endl;
    int q[3];
    for(int i=0;i<3;i++)
    {
    	cin>>q[i];
	}
	s.set_marks(q[0],q[1],q[2]);
	
	int t=s.get_total();
	char g=s.get_grade();
	cout<<"*******yours entries are*******"<<endl;
	cout<<"your name is "<<s.getname()<<endl;
	cout<<"your roll no. is ";
	cout<<s.getroll()<<endl;
	cout<<"your marks are "<<endl;
	s.get_marks();
	
    cout<<"your total marks out of 300 is "<<t<<endl;
    cout<<"your grade is "<<g<<endl;
    return 0;
	
}

