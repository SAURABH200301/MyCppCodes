/*//this program is to show how pointer is initize and how to use it for different perpose

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
  { 
      string name;
      cout<<"enter any sentence"<<endl;
      getline(cin,name);          //syntax to use getline(cin,name)
      string* ptr =&name;  //a pointer variable with the name ptr, that stores the address of name
      cout<<name;           //here we first print the sentence
      cout<<endl;    
      cout<<&name<<endl;     //here we print the memory address using & operator
      cout<<ptr<<endl;       //here we again print memory but using pointer as we store address above in ptr
      cout<<*ptr;            //here we print data using pointer
      int a= name.length();                                  //here we use length() and size function to find the length of sentence
      cout<<"length of sentence is"<<a<<" "<<name.size();
      getch();
  }*/
   #include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    while(i!=0)
    {
    	n=n+1;
       if(n%3==0||n%10==3||n%100>=30&&n%100<40)
       {
       }
       else 
       {
           cout<<n<<endl;
           i=0;
       }
    }
    return 0;
}
