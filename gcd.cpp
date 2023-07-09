//#include<bits/stdc++.h>
#include <bits/stdc++.h>
#define ll long long
using namespace std; 

int main()
{
	ll t;
	cin>>t;
	while(t--){
    ll num1, num2, gcd, lcm, remainder, numerator, denominator;
    cin>>num1>>num2;
    if (num1 > num2)
    {
        numerator = num1;
        denominator = num2;
    }
    else
    {
        numerator = num2;
        denominator = num1;
    }
    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    gcd = denominator;
    lcm = num1 * num2 / gcd;
    cout<<gcd<<" "<<lcm<<endl;
   }
   return 0;
}

//#define ll long long
//using namespace std;
//ll getgcd(ll n,int m)
//{
//	while(m!=n)
//	{
//		if(m>n)
//		m=m-n;
//		else
//		 n=n-m;
//	}
//	return m;
//}
//ll getLcm(int num1,int num2){
//	int maxValue = (num1 > num2)? num1 : num2;
//	
//	while(1)
//	{
//		if(maxValue % num1 == 0 && maxValue % num2 == 0)
//		{
//			return maxValue;
//		} 
//		++maxValue;
//	}
//}
//int main()
//{
//	ll t;
//	cin>>t;
//	while(t--)
//	{
//	    ll a,b;
//		cin>>a>>b;
//		ll gcd=getgcd(a,b);
//		ll lcm =getLcm(a,b);
//		cout<<gcd<<" "<<lcm;	
//	}
//	return 0;
//}
