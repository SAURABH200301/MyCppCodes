/*#include<iostream>
using namespace std;
int main()
{
    int s,x,n;           //s is dist bw A and B   x is max dist in one day  n exception
    cin>>s>>x>>n;
    int t[n],y[n];       //t is day of exception       y dist
    for(int i=0;i<n;i++)
     {
            cin>>t[i]>>y[i];
     }
     int sum =0,si=0; int i=1;
     while(sum<s||i<=(s/x))
     {
         
              if(x>s) 
              {
                  cout<<1<<endl;
                  break;
              }
            
				if(i==t[i])
				   {
				   sum+=y[i];
				   si+=1;
			       }
				else 
				   {
				   sum+=x; 
				   si+=1;
			       }
		  i++;		   
			 
			  
         
     }cout<<si-1<<endl;
     return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
       int c,n,sum=0;
       cin>>c>>n;
       int h=c;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           arr[i]=i+1;
           sum+=i+1;
       }
       c-=sum;
       if(c<0)
       {
           cout<<h<<endl;
           //continue;
       }
       else
       {
	   while(c>0&&c>=n)
       {
           for(int i=0;i<n;i++)
           {
               arr[i]+=1;
               c-=1;
           }
       }
       cout<<c<<endl;
   }
       t--;
    }
    return 0;
}*/
#include <iostream>
using namespace std;
int main()
{ int t;
long long c, n, rem;
cin >> t;
while (t--)
{
cin >> c >> n;
if((n*(n+1)/2)>c)
{
cout << c << endl;
continue;
}
else
{
rem = c - (n*(n+1)/2);
}
cout << rem%n << endl;
}
return 0;

}
