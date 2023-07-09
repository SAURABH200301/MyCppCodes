/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n;cin>>n;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')
		{
			if((int)s[i]>(90-n)&&(int)s[i]<=90)
			{
				int m=((int)s[i]+n)-90;
				s[i]=(char)(64+m);
				
			}
			else if((int)s[i]>(122-n)&&(int)s[i]<=122)
			{
				int m=((int)s[i]+n)-122;
				s[i]=(char)(96+m);
			}
			else
			s[i]=(char)((int)s[i]+n);
		}
		else if(s[i]>='0'&&s[i]<='9')
		   {
		   	if(s[i]>(char)(57-n))
		   	{
		   		int m=((int)s[i]+n)-9;
				s[i]=(char)(-1+m);
			   }
			else
		   	s[i]=(char)(s[i]+n);
		   }
	}
	cout<<s;
	return 0;
}*/
#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;

    int n;

    cin>>s;

    cin>>n;

    for(int i=0;i<s.size();i++){

        if(s[i]>='A'&&s[i]<='Z'){

            s[i]='A'+(s[i]-'A'+n)%26;

        }else if(s[i]>='a'&&s[i]<='z'){

            s[i]='a'+(s[i]-'a'+n)%26;

        }else if(s[i]>='0'&&s[i]<='9'){

            s[i]='0'+(s[i]-'0'+n)%10;

        }

    }

    cout<<s;

    return 0;

}
