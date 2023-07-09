#include<bits/stdc++.h>
using namespace std;

class contact
{
	int ph;
	string name,add,email;   //add for address, email for email
	public:
		void setnum(int n){ph=n;}
		void setname(string s){	name=s;}
		void setadd(string add){this->add=add;}
		void setemail(string s){email=s;	}
		int getnum(){return ph;}
		string getadd(){return add;}
		string getname(){return name;}
		string getemail(){return email;}
		
	void create_contact()
	{
		cout<<"Phone: ";
		cin>>ph;
		cout<<"Name: ";
		cin.ignore();
		getline(cin,name);
		cout<<"Address: ";
		cin.ignore();
	    getline(cin,add); 
 
		cout<<"Email address: ";
		cin.ignore();
		getline(cin,email);
 
		cout<<"\n";
	}
    void show_contact();
};
fstream fp;
contact cont;

void save_contact()
{
	fp.open("contactBook.dat",ios::out|ios::app);
	cont.create_contact();
	fp.write((char*)&cont,sizeof(contact));
	fp.close();
	cout<<endl<<endl<<"Contact Has Been Sucessfully Created...";
	getchar();
}

void contact::show_contact()
	{
		cout<<endl<<"Phone #: "<<cont.getnum();
		cout<<endl<<"Name: "<<cont.getname();
		cout<<endl<<"Address: "<<cont.getadd();
		cout<<endl<<"Email Address : "<<cont.getemail();
	}

void show_all_contacts()
{
	cout<<"\n\t\t================================\n\t\t\tLIST OF CONTACTS\n\t\t================================\n";
	fp.open("contactBook.dat",ios::in);
	while(fp.read((char*)&cont,sizeof(contact)))
	{
		cont.show_contact();
		cout<<endl<<"=================================================\n"<<endl;
	}
	fp.close();
}

int main()
{
		int ch;
	do
	{	
	
		cout<<"\n\t **** Welcome to Contact Management System ****";
		cout<<"\n\n\n\t\t\tMAIN MENU\n\t\t====================="<<endl;
		cout<<"\t\t[1] Add a new Contact"<<endl;
		cout<<"\t\t[2] List all Contacts"<<endl;
		cout<<"\t\t[3] Search for contact"<<endl;
		cout<<"\t\t[4] Edit a Contact"<<endl;
		cout<<"\t\t[5] Delete a Contact"<<endl;
		cout<<"\t\t[0] Exit\n\t\t=================\n\t\t";
		cout<<"Enter the choice:"; 
		cin>>ch;
 
		switch(ch)
		{
			case 0: cout<<"\n\n\t\tThank you for using CMS...";
				break;

			case 1:save_contact();
				break;

			case 2:show_all_contacts();
				break;
			case 3:
				int num;
				cout<<"\n\n\tPhone: ";
				cin>>num;
				//display_contact(num);
				break;
			case 4://edit_contact();
				break;

			case 5://delete_contact();
				break;
			default:
				cout<<"ENTER VALID OPTIONS"<<endl;
				break;
		}
	}while(ch>0);
	return 0;
}

