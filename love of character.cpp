#include<iostream>
#include<map>
#include<string.h>
using namespace std;
int main()
{
	map<char,int> m;
	string s;
	cin>>s;	
	for(int i=0;i<s.length();i++)
	{
		char curr=s[i];
		m[curr]++;
	}
	cout<<m['a']<<" "<<m['s']<<" "<<m['p']<<endl;
	return 0;
}
