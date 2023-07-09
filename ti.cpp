#include<iostream>
#define ll long long
using namespace std;
int main()
{
ll t;
 cin>>t;
 while(t--)
 {
     ll n,m,ans=0;
     cin>>n>>m;
     while(1)
     {
         ans+= (((n/2+n%2)%m)*((n/2+n%2)%m))%m;  // sum of all odd until n/2+n%2
         cout<<ans<<" ";
         ans%=m;  // moding 

         n/=2;  // taking all odd out 
         if(n==0)  // nothing left 
            break;
     }
     cout<<"ans"<<ans<<endl;
 }
 return 0;
}


