/*#include<iostream>
#include<string>
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
		cin>>s;
		for(int i=0;i<n;i++)
		{
			if(s[i]>='A'&&s[i]<='Z')
			{
				if(s[i]>='A'&&s[i]<='C')
				  s[i]='C';
				else if(s[i]<='G')
				{
					if(s[i]>'E')
					 s[i]='G';
					 else
					 s[i]='C';
				  }  
				  else if(s[i]<='I')
				  {
				  	if(s[i]>'H')
					 s[i]='I';
					 else
					 s[i]='G';
				  }
				  else if(s[i]<='O')
				  {
				  	if(s[i]>'M')
					 s[i]='O';
					 else
					 s[i]='I';
				  }
				  else if(s[i]<='S')
				  {
				  	if(s[i]>'Q')
					 s[i]='S';
					 else
					 s[i]='O';
				  }
				  else if(s[i]<='Y')
				  {
				  	if(s[i]>'V')
					 s[i]='Y';
					 else
					 s[i]='S';
				  }
				  else
				  s[i]='Y';
			}
			else
			{
				if(s[i]>='a'&&s[i]<='e')
				{
					if(s[i]>'c')
					 s[i]='e';
					 else
					 s[i]='a';
				}
				else if(s[i]<='k')
				{
					if(s[i]>'h')
					 s[i]='k';
					 else
					 s[i]='e';
				}
				else if(s[i]<='m')
				{
					if(s[i]>'l')
					 s[i]='m';
					 else
					 s[i]='k';
				}
				else if(s[i]<='q')
				{
					if(s[i]>'o')
					 s[i]='q';
					 else
					 s[i]='m';
				}
				else
				s[i]='q';
				
			}
		}
		cout<<s<<endl;
		t--;
	}
	return 0;
}*/

#include <iostream>
using namespace std;
int main()
{
string s;
cin >> s;
int l = s.length(), i, k = 0;
for (i = 0; i <= l - 6; i++)
{
for (int j = i + 1; j < i + 6; j++)
{
if (s[i] != s[j])
{
i = j-1;
k=0;
break;
}
else
{
k = 1;
}
}
if (k == 1)
{
cout << "Sorry, sorry!";
break;
}
}
if (k == 0)
{
cout << "Good luck!";
}
return 0;
}
