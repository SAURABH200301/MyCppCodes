#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;int arr[n],arr1[n];
    cin>>n;
    unordered_map<int,int> m;
    for(int i=0;i<n-1;i++)
    {
        pair<int,int> p;
        cin>>p.first;
        cin>>p.second;
        m.insert(p);
    }
    for(int i=0;i<n;i++)
      cin>>arr[i];
    for(int i=0;i<n;i++)
       cin>>arr1[i];
    
    for(int i=0;i<n;i++)
      cout<<arr[i];
    for(int  i=0;i<n;i++)
       cout<<arr1[i];
    // int count=0;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<"h"<<" ";
    //     if(arr[i]!=arr1[i])
    //     {
    //         cout<<"hello";
    //         int root=m[i+1];
    //         for( auto x:m)
    //         {
    //             cout<<"hey2"<<endl;
    //             if(x.second==root)
    //             {
    //                 count++;
    //                 cout<<"hey";
    //             }
    //         }

    //     }
    // }cout<<count;
    return 0;
}