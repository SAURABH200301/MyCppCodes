#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"SAURABH: 20SCSE1010717"<<endl;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the array"<<endl;
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	cout<<"enter the number to be searched"<<endl;
	cin>>m;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==m)
		{
			cout<<"number is found at :"<<i+1<<" position"<<endl;
			break;
		}
	}
	return 0;
}
