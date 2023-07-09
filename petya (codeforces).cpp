#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,s1;
	int c=0;
	cin>>s;
	cin.ignore();
	cin>>s1;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    for(int i=0;i<s.length();i++)
    {
    	if(s[i]<s1[i])
    	 {
    	 	c=-1;
    	 	break;
		 }
		 else if( s1[i]<s[i])
		 {
		 	c=1;
		 	break;
		 }
	}
	cout<<c<<endl;
return 0;
}
