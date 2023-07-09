#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"ENTER THE NUMBER OF ELEMENT  IN ARRAY"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0,j=n-1;i<n/2;i++,j--)
	{
		int a=arr[i];
		arr[i]=arr[j];
		arr[j]=a;
	}
	cout<<"REVERSE ARRAY IS:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
