#include<iostream>
void show(union student);
using namespace std;
union student{        //(i)
	char name[80];
	int age;
	float marks;
};
	void show(union student s1)
	{
		cout<<"name of the student is "<<s1.name<<endl;
		cout<<"age of the student is "<<s1.age<<endl;
		cout<<"marks of the student is "<<s1.marks<<endl;
	}

int main()
{
	union student s;
	cout<<"enter the name of the student"<<endl;
	cin>>s.name;
	cout<<"enter the age of the student"<<endl;
	cin>>s.age;
	cout<<"enter the marks of the student"<<endl;
	cin>>s.marks;
	show(s);
	return 0;
}

