#include<iostream>
#include<math.h>
using namespace std;
#define ll long long
int main()
{
ll p=pow(10,9)+7;
ll n,m,rem,w=1;
cin>>n>>m;
while(m>0)
{
w=((w*m)%p);
cout<<w<<endl;
m--;
}
// rem=(w%p);
cout<<w;
return 0;
}
