#include<bits/stdc++.h>
typedef long long LL;	
using namespace std;
int main()
{
    LL n,t,a,b,k;
    cin>>n>>t;
    LL arr[n]={0};
    while(t--)
    {
         cin>>a>>b>>k;
         for(LL i=a;i<=b;i++)
         {
             arr[i-1]+=k;
         }
         

    }
    cout<<*max_element(arr, arr + n);
    return 0;
}
