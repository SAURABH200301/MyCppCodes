#include<iostream>  //make a state space tree to understand
using namespace std;
void perm(char s[],int k)
{
	static int A[10]={0};
	static char res[10];
	if(s[k]=='\0')
	{
		res[k]='\0';
		cout<<res<<endl;
	}
	else
	{
		for(int i=0;s[i]!='\0';i++)
		{
			if(A[i]==0)
			{
				res[k]=s[i];
				A[i]=1;
				perm(s,k+1);
				A[i]=0;
			}
		}
	}
}
using namespace std;
int main()
{
	char s[80];
	cin>>s;
	perm(s,0);
	return 0;
}
