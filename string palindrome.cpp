#include<iostream>
using namespace std;
int main()
{
	string s1;
	cout<<"enter string 1"<<endl;
	cin>>s1;
	for(int i=0,j=s1.length()-1;i<(s1.length())/2;i++,j--)
	{
		if(s1[i]!=s1[j])
		 {
		 cout<<"STRING IS NOT PALINDROME"<<endl;
		 return 0;
	     }
	}
	cout<<"STRING IS PALINDROME"<<endl;
	return 0;
}
