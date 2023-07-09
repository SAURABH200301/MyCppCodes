#include<iostream>
using namespace std;
int main()
{
	 cout<<"this program is to convert decimal to binary"<<endl;
	 int n,a[8];
	 cout<<"enter any decimal number"<<endl;
	 cin>>n;
	 /*int i=7;
	 while(i>=0)
	 {
	 	
	 	a[i]=(n%2);
	 	n=n/2;
	 	i--;
	 }*/
	 for(int i=7;i>=0;i--)     
	 {
	 	a[i]=(n%2);
	 	n=n/2;
	 }
	 cout<<"number in decimal is"<<endl;
	 for(int i=0;i<8;i++)
	 cout<<a[i];
	 return 0;
}
