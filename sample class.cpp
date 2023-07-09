#include<iostream>   //NAME=SAURABH SHARMA 20SCSE1010717
using namespace std;   //ABSTARCTION 
class start         
{
  private:    //PRIVATE ACCESS SPECIFIER 
	int age;	
  public:     //PUBLIC ACCESS SPECIFIER 
  string name;
  int clas;
  start()       //CONSTRUCTOR
  {
  	name="null";
  	clas=0;
  	age=0;
  }
  int getage()  //PRIVATE NEEDS GETTER FUNCTION
  {
  	return age;
  }
  void setage(int a) //PRIVATE NEEDS SETTER FUNCTION
  {
  	age=a;
  }
  void print()    //PRINT FUNCTION
  {
  	cout<<"NAME OF THE STUDENT IS "<<name<<endl;
  	cout<<"AGE OF STUDENT IS "<<getage()<<endl;
  	cout<<"CLASS "<<clas<<endl;
   }
   void enter(string n,int c) //TO ASSIGN THE INPUT 
   {
   	   name=n;
   	   clas=c;
	}	
};
int main()       //MAIN FUNCTION
{
	start s;string n; int c,a;
	cout<<"ENTER THE NAME OF THE STUDENT "<<endl;
	cin>>n;
	cout<<"ENTER STUDENTS AGE"<<endl;
	cin>>a; s.setage(a);
	cout<<"ENTER THE CLASS"<<endl;
	cin>>c;
	
	s.enter(n,c);
	s.print();
	return 0;
}
