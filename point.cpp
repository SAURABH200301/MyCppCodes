#include<iostream>
using namespace std;
int main()                           //refrence and pointer both can be used to change the value of original variable
{  
    int var =10;
    int *ptr= &var;
    cout<<"value of var= "<<*ptr<<endl;
	cout<<"address of var "<<ptr<<endl;
	*ptr=20;
	cout<<"*ptr"<<*ptr<<"  "<<var;
	int &ref =var;
	ref=30;
	cout<<ref<<"  "<<*ptr<<" "<<var;
    
}
