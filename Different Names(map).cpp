#include<bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
	string s;int count=0;
	getline(cin,s);
	string temp="";
	map<string,int> m;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' ')
		{
			m[temp]++;
			
			temp="";
		}
		else
		{
			temp+=s[i];
		}
		if(i==s.length()-1)
		{
			m[temp]++;
		}
	}
	map<string,int>:: iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		if(it->second>=2)
		{
		cout<<it->first<<" "<<it->second<<endl;
		count++;
	    }
	}
	if(count==0)
	  cout<<-1;
	  return 0;
}
