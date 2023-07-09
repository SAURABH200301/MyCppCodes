#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	 string s="name is saurabh sharma";
	 
	 cout<<s<<endl;
	 
	 cout<<"enter the letter/word to find the index in the string "<<endl;
	string a; int f;
	getline(cin,a);

	cout<<"enter the index where u wanna know what is the letter"<<endl;
	cin>>f;
	int d=s.length();                    // to find length
	if(s.find(a)>=0&&s.find(a)<=d)
	{
	cout<<"your letter found at "<<s.find(a)<<endl;           // find letter / words
	cout<<"your entered letter is at the postion "<<s.rfind(a)<<"  searching from the left "<<endl;  //start searching from right to left
    cout<<s.find_first_of(a)<<endl;  //search given letter either if it is given in words it give position of letter which meet first
     cout<<s.find_last_of(a)<<endl;
     
    }
     else cout<<"not found";
     cout<<"using substr(index,no of letter) extracting name "<<s.substr(8,7)<<endl;
     if(s.compare(a)==0)                  //compare two string or can say substract ascii code of starting letter 
     {                                    //if same returns 0 if str1 has greater ascii code return +ve value
	 cout<<"strings are same"<<endl;      //if str1 has lower ascii code returns -ve value
     }
     else cout<<"not same";
     cout<<"using at() function finding  letter using index "<<s.at(f)<<endl;  //returns letter at given index
     
	
	 return 0;
}
