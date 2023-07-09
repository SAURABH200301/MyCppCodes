/*#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int players=0;
	if(s[s.length()-1]=='6'){

        cout<<"-1";}
	else
	{
	for(int i=0;i<s.length();i++)
	{
		
		if(s[i]!='6')
		  players++;
	}
	cout<<players<<endl;}
	return 0;
}*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
string s;
cin>>s;
int count=0,ans=0;
for(int i=0;i<s.length()-1;i++)
{
    if(s[i]!=s[i+1])
     {
     count++;
     }
else
   {
    if(count+1>ans)
     {
        ans=count+1;
     }
        count=0;
   }
}
if(count>ans)
cout<<count+1<<endl;
else
cout<<ans<<endl;
}
