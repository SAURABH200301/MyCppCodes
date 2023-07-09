#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,num_k,sum=0;
    cin>>n>>k;
    int arr[100];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(i==k)
        {
            num_k=arr[i];
        }
    }
    if(arr[1]==0)
    {
        cout<<"0";
        exit(0);
    }
    for(int j=1;j<=n;j++)
    {
        if(arr[j]>=num_k && arr[j]!=0)
        {
            sum++;
        }
    }
    cout<<sum;
    return 0;
}

