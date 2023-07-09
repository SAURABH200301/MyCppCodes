#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char S[100];
	cin.getline(S,100);
	int l=strlen(S);
	for(int i=0;i<l;i++)
	{
		if(S[i]>=65&&S[i]<=90)
		{
			S[i]=S[i]+32;
		}
		else if(S[i]>=97&&S[i]<=122)
		{
			S[i]=S[i]-32;
		}
	}
	cout<<S;
	return 0;
}
