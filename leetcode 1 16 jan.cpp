#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;int k; string fill;
	cin>>s;
	cin>>k;
	cin>>fill;
	vector<string> str;
        if(s.length()%k==0)
        {
            for(int i=0;i<s.length();i+=3)
            {
            	int j=i+3;
            	cout<<"i"<<i<<" j"<<j<<endl;
//            	cout.ignore();
                str.push_back(s.substr(i,j));
                cout<<"h"<<endl;
            }
        }
        else{
            while(s.length()%k!=0)
            {
                s=s+fill;
                cout<<"hey"<<endl;
            }
            for(int i=0;i<(s.length());i++)
            {
            	int j=i+3;
                string a= s.substr(i,j);
                str.push_back(a);
            }
        }
        
        for(int i=0;i<str.size();i++)
          cout<<str[i]<<" ";
          return 0;
}
