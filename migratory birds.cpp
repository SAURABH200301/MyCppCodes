#include<iostream>
#include<vector>
using namespace std;
int migratoryBirds(vector<int> arr,int arr_count) {
    long long int a[10]={0};
    for(int i=0;i<arr_count;i++)
    {
        a[arr[i]]++;
    }
    for(int i=0;i<10;i++)
      {
	  cout<<a[i]<<" ";
      }
    cout<<endl;
    long long int s=a[0];
    for(int i=0;i<10;i++)
    {
    	if(s==a[i])
    	   continue;
        if (s<=a[i]) {
           s=i;
           
        }
    }
   
     return s;
}

int main()
{
	int n;cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int o=migratoryBirds(a,n);
	cout<<o<<endl;
	return 0;
}
