#include<iostream>
using namespace std;
enum day {mon=1,tue,wed,thr,fri,sat,sun};
int main()
{
	day d;
	d=mon;
	int t;
	cin>>t;
	while(t>0)
	{
		int k;            //topics
		cin>>k;
		int arr[7];
		for(int i=0;i<7;i++)
		  cin>>arr[i];
		for(int i=0;i<7;i++)
		{
			if(arr[i]==1)
			{
				
			}
		 } 
		t--;  
	}
	return 0;
}
