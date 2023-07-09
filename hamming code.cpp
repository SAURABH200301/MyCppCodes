#include<bits/stdc++.h>//hamming code for 7 bits
using namespace std;
int binary_to_number(int n1,int n2,int n3)
{
	int num=0;
	num+=n1*1;
	num+=n2*10;
	num+=n3*100;
	return num;
}
int fun(int n1,int n2,int n3,int n4)
{
	
	int count=0;
	if(n1==1)
	  count++;
	if(n2==1)
	  count++;
	if(n3==1)
	  count++;
	if(n4==1)
	  count++;
	
	if(count%2==0)
	  return 0;
	else
	  return 1;
}
int main()
{
	string s;
	cin>>s;
	reverse(s.begin(),s.end());
    int p1,p2,p4;    //parity bits
    p1=fun(int(s[0]),int(s[2]),int(s[4]),int(s[6]));
    p2=fun(int(s[1]),int(s[2]),int(s[5]),int(s[6]));
    p4=fun(int(s[3]),int(s[4]),int(s[5]),int(s[6]));
    int index=binary_to_number(p1,p2,p4);
    cout<<"error at:"<<index;
	return 0;
}
