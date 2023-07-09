#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string b_w=s.substr(8,s.length());
	cout<<b_w<<endl;
// 	cout<<"length "<<b_w.length()<<endl;
	for(int i=0;i<b_w.length()-8;i++)
	{
		int count=0;

		for(int j=i;j<=i+6;j++)
		{

			if(b_w[j]=='1')
			  {
			  count++;
		      }	
			else
			  count=0;
			if(count==6)
			{
				string temp=b_w.substr(0,j)+"0"+b_w.substr(j,b_w.length());
				// cout<<"length of temp"<<temp.length()<<endl;
				// cout<<"temp"<<temp<<endl;
			    b_w=temp;
			}
		}
	}
// 	cout<<b_w<<endl;
// 	cout<<"length "<<b_w.length()<<endl;
	cout<<"01111110"<<b_w<<endl;
	return 0;
}
