#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	stack<char> s;int count=0;
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='W')
		  s.push(str[i]);
		else if(str[i]=='B')  
		{
			int c=0;
			while(s.empty()&&c!=2)
			{
				s.pop();
				c++;count++;
			}
			for(int j=i+1;j<i+3;j++)
			{
				if(str[j]=='W')
				 count++;
				else if(str[j]=='B')
				   {
				   	i=j;continue;
				   }
				 
			}
			
		}
	} 
	cout<<count<<endl;
	return 0;
}
