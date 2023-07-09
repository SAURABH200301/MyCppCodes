#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int k;
        cin>>s>>k;
        int flag=0,slen=s.length();
        if(slen%k==0)
        {
            int plen=slen/k;
            if(plen%2)
            {
                for(int i=0;i<slen;)
                {
                    int count=i;
                    for(int j=0;j<=plen/2;j++)
                    {
                        if(s[i]!=s[count+plen-1-j])
                        {
                            flag=1;
                            break;
                        }
                        i++;
                    }
                    if(flag)
                        break;
                    i=i+plen/2;
                }
            }
            else
            {
                for(int i=0;i<slen;)
                {
                    int count=i;
                    for(int j=0;j<=plen/2;j++)
                    {
                        if(s[i]!=s[count+plen-1-j])
                        {
                            flag=1;
                            break;
                        }
                        i++;
                    }
                    if(flag)
                        break;
                    i=i+plen/2-1;
                }
            }
        }
        else
            flag=1;
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
	    return 0;
}
