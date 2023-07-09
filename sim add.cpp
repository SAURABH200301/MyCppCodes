#include <iostream>
using namespace std;
class calculator
{
   int a,b;
   public:
   int geta()
   {
       return a;
   }
   int getb()
   {
       return b;
   }
   void seta(int n)
   {
       a=n;
   }
   void setb(int n)
   {
       b=n;
   }
   int addition(int a,int b)
   {
       return a+b;
   }
   int subtraction (int a,int b)
   {
       return a-b;
   }
};
int main() {
	calculator o;
	int a,b;
	cout<<"ENTER OPTION TO PERFORM OPRATORTIONS"<<endl;
	cout<<"1. for addition"<<endl;
	cout<<"2. for subtration"<<endl;
	int h;cin>>h;
	switch(h)
	{
	    case 1: cout<<"enter any two value"<<endl;
	cin>>a>>b;
	o.seta(a);o.setb(b);
	cout<<"addition of twp number is "<<o.addition(a,b);
	break;
	case 2:cout<<"enter any two value"<<endl;
	cin>>a>>b;
	o.seta(a);o.setb(b);
	cout<<"subtraction of twp number is "<<o.subtraction(a,b);
	}
	
	
	return 0;
}

