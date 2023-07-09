#include<iostream>
using namespace std;
long long int keypad(string input,string output[])
{
	if(input.empty())
	{
		output[0]=" ";
		return 1;
	}
	string smallstring=input.substr(1);
	long long int smalloutputsize=keypad(smallstring,output);
	for(long long int i =0;i<smalloutputsize;i++)
	{
		output[i+smalloutputsize]=input[0]+output[i];
	}
	return 2*smalloutputsize;
}
int main()
{
	string l;
	const char input[10][5]={"_"," _","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	//input[0]="";input[1]=" ";input[2]="abc";input[3]="def";input="ghi";input[4]="jkl";input="mno";input="pqrs";input="tuv";input="wxyz";
	string *output=new string;
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	while(n>0)
	{
		int num=n%10;
		n/=10;
		l=l+input[num];
	}
	cout<<l;
	long long int count =keypad(l,output);
	cout<<output<<endl;
	for(long long int i=0;i<count;i++)
	{
		cout<<output[i]<<endl;
	}
	return 0;
}
