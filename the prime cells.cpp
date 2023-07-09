#include<iostream>
using namespace std;
/*int fun(int ar[][100],int i,int j,int n)
{
	int sum=0;
	for(int o=0;o<n;o++)
	  sum+=ar[o][j];
	for(int o=0;o<n;o++)  
	sum+=ar[i][o];
	return (sum-(2*ar[i][j]));
}*/
bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1) 
        return false; 
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
}
int main()
{
	int n;
	cin>>n;
	int arr[n][n],s=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		  cin>>arr[i][j];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int sum=0;
	for(int o=0;o<n;o++)
	  sum+=arr[o][j];
	for(int o=0;o<n;o++)  
	sum+=arr[i][o];
	sum= (sum-(2*arr[i][j]));
			if(isPrime(sum))
			 s++;
		}
	}
	cout<<s<<endl;
	return 0;
}
