#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    if(((n/1000000000)%10)==0)
     cout<<"Illegal ISBN"<<endl;
    else  
    {
        int j=10;
        while(n>0)
        {
            int m=n%10;
            n/=10;
            sum+=j*m;
            j--;
        }
        if(sum%11==0)
    cout<<"Legal ISBN"<<endl;
    else
    cout<<"Illegal ISBN"<<endl;
    }
    
    return 0;
}
