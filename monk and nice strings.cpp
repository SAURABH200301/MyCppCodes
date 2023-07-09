#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int size;
	cin>>size;
	char str[size];
	for(int i=0;i<size;i++)
	   cin>>str[i];
	for(int i=0;i<size;i++)
	{
		int count=0;
		for(int j=0;j<=i;j++)
		{
			if((int)str[j]<(int)str[i])
			   count++;
		}
		cout<<count<<endl;
		//cout<<((int)str[i]-97)<<endl;
	}
	return 0;
}
