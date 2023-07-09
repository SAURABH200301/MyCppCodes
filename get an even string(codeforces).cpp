#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
int len=s.size();
map<char,int>mp;
for(int i=0;i<s.size();i++){
mp[s[i]]++;
if(mp[s[i]]==2)
{
len-=2;
mp.clear();
}
}
cout<<len<<endl;
}
return 0;
 
}
