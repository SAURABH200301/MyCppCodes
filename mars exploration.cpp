#include<iostream>
using namespace std;
string reduce_string(string s)
{
	string a;char c=s[0];int n=1,i=s.length(),j=1;
	do
	{
	   if(s[j]==c)
	   {
	   	n++;
	   }
	   else
	   {
	   	if(n%2!=0)
	   	{
	   		a.push_back(s[j-1]);
	   		n=0;
		   }
		c=s[j];
	   }
	   j++;	
	}while(j!=i);
	cout<<a<<endl;
	return a;
}
int main()
{
	string s;
	cin>>s;
    string a=reduce_string(s);
    cout<<a;
	return 0;
}
