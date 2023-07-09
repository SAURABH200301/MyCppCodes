	#include<iostream>
	using namespace std;
	int seven(long long int n)
	{
		if(n==1)
		 return 2;
		else if(n==7)
		return 3;
		else if(n==4)
		return 4;
		else if(n==2||n==3||n==5)
		return 5;
		else if(n==6||n==9||n==0)
		return 6;
		else
		return 7;
	}
	int num(long long int n)
	{
		int sum=0;
		while(n>0)
		{
			long long int m=n%10;
			n/=10;
			sum+=seven(m);
		}
		return sum;
	}
	
	int main()
	{
		int t;
		cin>>t;
		while(t>0)
		{
			long long int n;cin>>n;long long int arr[n],bulb[n];
			for(int i=0;i<n;i++)
			cin>>arr[i];
			for(int i=0;i<n;i++)
			{
				bulb[i]=num(arr[i]);
			}
			long long int min=bulb[0],index=0;
			for(int i=1;i<n;i++)
			{
				if(min>bulb[i])
				  {
				  	min=bulb[i];
				  	index=i;
				  }
			}
			cout<<arr[index]<<endl;
			t--;
		}
		return 0;
	}
