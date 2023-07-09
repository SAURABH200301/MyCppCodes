#include<iostream>
using namespace std;
bool is_greater(long long int a[],long long int s,long long int n)
{
    bool temp=true;
    for(int i=0;i<s;i++)
    {
        if(a[i]<n)
          temp=false;
    }
    return temp;
}
int increment(long long int a[],long long int s,long long int n,long long int j)
{
	if(is_greater(a,s,n))
       return j;
     j++;
    for(int i=0;i<s;i++)
    {
        a[i]+=1;
    }
    if(is_greater(a,s,n))
       return j;
    else
	{
		   
      increment(a,s,n,j);
  }
}
int main()
{
    long long int t;
    cin>>t;
    while(t>0)
    {
        long long int n,k,i=0;
        cin>>n>>k;long long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<increment(arr,n,k,i)<<endl;
        t--;
    }
}
