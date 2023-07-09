#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cout<<"SAURABH:20SCSE1010717"<<endl;
	cout<<"enter the length of array:";
	cin>>n;
	ll arr[n];
	cout<<"enter the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<"enter the number to be find in array: ";
	ll num;
	cin>>num;
	ll mid= (0+n)/2;
	ll f=0, l=n;
	bool isFound=false;
	while(f<l)
	{
		mid=(l+f)/2;
		if(arr[mid]==num)
		{
			cout<<"number is found"<<endl;
			isFound=true;
			break;
		}else if(num>arr[mid]){
			f=mid+1;
		}
		else{
			l=mid-1;
		}
	
	}
	if(!isFound)
	cout<<"number is not present in array"<<endl;
	return 0;
}
