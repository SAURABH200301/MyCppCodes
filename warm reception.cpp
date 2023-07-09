#include<bits/stdc++.h>
#include<utility>
using namespace std;
int main()
{
   int n,c;//n is the number of the guest and c is the chair
   cin>>n;
   c=n;
   pair<int,int> p[n];
   for(int i=0;i<n;i++)
   {
   	cin>>p[i].first;
   }
   for(int i=0;i<n;i++)
   {
   	cin>>p[i].second;
   }
   for(int i=1;i<n;i++)
   {
   	if(p[i].first>p[i-1].second)
   	  c--;
   }
   cout<<c;
   return 0;
}
