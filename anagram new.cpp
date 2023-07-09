#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
		getline(cin,s1);
	int a[26]={0};
    cin>>s2;
	if(s1.length()!=s2.length())
	{
		cout<<"NOT ANAGRAM"<<endl;
	}
	else
	{
		for(int i=0;i<s1.length();i++)
		{
			a[s1[i]-97]+=1;
		}
		for(int i=0;i<s2.length();i++)
		{
			a[s2[i]-97]-=1;
			if(a[s2[i]-97]<0)
			{
				cout<<"NOT ANAGRAM"<<endl;
				break;
			}
		}
		cout<<"ANAGRAM"<<endl;
	}
	return 0;
}
