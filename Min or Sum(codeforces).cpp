#include<iostream>
using namespace std;
int main(){
int t,n,x,y;
cin>>t;
while(t--){
cin>>n;
for(x=0;n;n--)
cin>>y,x|=y;
cout<<x<<'\n';
}
}
