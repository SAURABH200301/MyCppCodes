#include<iostream>
#include<conio.h>              //this program is to show how to use typedef 
using namespace std;
typedef int marks ;        // this is how typedef is used to define user defined data type
typedef int rollno;
int main()
{   
    marks m1,m2;
    rollno r1,r2;
    cout<<"enter the roll no. 1"<<endl;
    cin>>r1;cout<<endl;
    cout<<"enter the roll no. 2"<<endl;
    cin>>r2;cout<<endl;
    cout<<"enter the marks of 1 and 2 roll no"<<endl;
    cin>>m1>>m2;
    cout<<"roll no "<<r1<<"  has obtained marks "<<m1<<endl;
    cout<<"roll no "<<r2<<"  has obtained marks "<<m2<<endl;
    getch();
    return 0;
}
