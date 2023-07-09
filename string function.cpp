#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	 string s,s2;
	 cout<<"enter your name "<<endl;
	 getline(cin,s); 
	 cout<<"give another name"<<endl;
	 getline(cin,s2);                           // use to get string
	 cout<<"length of you name is "<<s.length();           //use to get length of string or use s.size()
	 cout<<"capacity of your string is "<<s.capacity();     // use to get capacity of string
	 cout<<"max size of string is "<<s.max_size();          //tells max size
	 if(s.empty()==1)                                       //give one when string is empty
	 cout<<"empty"<<endl;
	 else 
	 cout<<"not empty"<<endl;
	 cout<<"enter your surname "<<endl;
	 s.append(" sharma");                                   //ADD STRING 
	 cout<<"name "<<s<<endl;
	 cout<<"inserting letter S"<<endl;
	 s.insert(0,"S");                                        //INSERT STRING  FROM THE STARTING
	 cout<<endl;
	 cout<<"name "<<s;
	 cout<<endl;
	 cout<<"replacing word using replace()"<<endl;
	 s.replace(0,8,"shikha ");
	 cout<<"name "<<s;
	 cout<<endl;
	 cout<<"inserting letter at the end 's'"<<endl;
	 s.push_back('s');                               //INSERT LETTER AFTER THE STRING
	 cout<<endl;
	 cout<<"name "<<s<<endl;
	 cout<<"using swap function changing the name"<<endl;
	 s.swap(s2);
	 cout<<"first name "<<s<<"  another name  "<<s2<<endl;
	 
	 
	 return 0;
	 }
