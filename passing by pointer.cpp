#include<iostream>
using namespace std;
int fun(int *y,int c)
{
	cout<<"your array is"<<endl;
	for(int i=0;i<c;i++)
	{
		cout<<*y<<" ";
		*y++;
	}
	return 0;
}
int main()
{
  int a[4],b=4;
  cout<<"enter the array "<<endl;
  for(int i=0;i<4;i++)
  cin>>a[i];
  fun(a,b);
  return 0;	
}
