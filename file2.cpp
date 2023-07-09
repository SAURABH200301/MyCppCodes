#include <iostream> //to fill details of 3 students//
#include <fstream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class student
{
	char name[40];
	char grade;
	float marks;

public:
	void getdata(void);
	void display(void);
};
void student::getdata(void)
{
	char ch;
	cin.get(ch);
	cout << "enter name" << endl;
	cin.getline(name, 40);
	cout << "enter grade" << endl;
	cin >> grade;
	cout << "enter the marks" << endl;
	cin >> marks;
}
void student::display(void)
{
	cout << "name" << name << "\t"
		 << "grade" << grade << "\t"
		 << "marks" << marks << endl;
}
int main()
{
	system("cls");
	student arts[3];
	fstream filin;
	filin.open("stu.dat", ios::in | ios::out);
	if (!filin)
	{
		cout << "cannot open file  !!" << endl;
		return 1;
	}
	cout << "enter details for 3 students" << endl;
	for (int i = 0; i < 3; i++)
	{
		arts[i].getdata();
		filin.write((char *)&arts[i], sizeof(arts[i]));
	}
	filin.seekg(0);
	cout << "the content of stundat are shown below" << endl;
	for (int i = 0; i < 3; i++)
	{
		filin.read((char *)&arts[i], sizeof(arts[i]));
		arts[i].display();
	}
	filin.close();
	return 0;
	getch();
}
