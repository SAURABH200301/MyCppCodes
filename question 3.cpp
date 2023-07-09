#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;cin>>n;int arr[n];
		for(int  i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int c_o=0,c_e=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]%2==0)
			 c_e++;
			else
			 c_o++;
		}
		if(c_o==0)
		 cout<<-1<<endl;
		 else
		  cout<<c_e<<endl;
		t--;
	}
	return 0;
}
