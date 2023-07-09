#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream fil;
	fil.open("abc.txt",ios::in);
	int c=0;
	string st;
	while(!fil.eof());
	{
	   cin>>st;
	   cout<<st<<" ";
	   if( st.compare("the") )
	      c++;	 
	}
	cout<<"counts="<<c;
	return 0;
}
