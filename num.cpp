#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;int sum=0;
		for(int i=0;i<n;i++)
		{
			
			if((int)s[i]>=48&&(int)s[i]<=57)
			{
				sum+=1;
				int j=i+1,k=1;
				while(j>0&&k>0)
				{
					if((int)s[j]>=48&&(int)s[j]<=57)
					j++;
					else
					k=-1;        //sadw96aeafae4awdw2wd100awd
					
				}
				i=j;
			}
		}
		cout<<sum<<endl;
		t--;
	}
	return 0;
	
}
