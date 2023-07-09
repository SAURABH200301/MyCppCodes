#include<bits/stdc++.h>
using namespace std;
int t,l,r,k;
int main()
{
	cin>>t;
    while(t--)
    {
        cin>>l>>r>>k;
        if(l==r)
            puts(l==1?"NO":"YES");
        else
            puts(r-l+1-(r/2-(l-1)/2)<=k?"YES":"NO");
    }
    return 0;
}
