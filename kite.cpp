#include<iostream>
using namespace std;
int main()
{ int n=5;
//cout<<"enter n";
//cin>>n;
   for(int i=0;i<n;i++)
   {for(int j=n;j>i;j--)
   cout<<" ";
   for(int k=0;k<=i;k++)
   cout<<"*"<<" ";
   cout<<endl;
        
   }
   for(int i=n;i>=0;i--)
   {for(int j=n;j>i;j--)
   cout<<" ";
   for(int k=0;k<=i;k++)
   cout<<"*"<<" ";
   cout<<endl;
}
   
}
