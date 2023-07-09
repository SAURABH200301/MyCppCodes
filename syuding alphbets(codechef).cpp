#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        int flag=0;
        for(int i=0;i<a.size();i++)
        {   flag=0;
            for(int j=0;j<s.size();j++)
            {
                if(a[i]==s[j])
                flag=1;
            }
            if(flag==0)
            break;
        }
        if(flag)
        {
            cout<<"Yes"<<endl;

        }
        else
        cout<<"No"<<endl;
    }
    return 0;
}
