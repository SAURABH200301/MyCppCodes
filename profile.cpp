#include<iostream>
using namespace std;
int main()
{
	int L,W,H,N;  //L=min length of photo  W=width  H=height of photo  N=number of phtoto
	cin>>L;  cout<<endl;        //enter min length of photo
	cin>>N; cout<<endl;         //enter number of photo
	while(N>0)
	{
		cin>>W>>H;cout<<endl;
		if(W<L||H<L)
		cout<<"UPLOAD ANOTHER"<<endl;
		else if(W==H)
		cout<<"ACCEPTED"<<endl;
		else 
		cout<<"CROP IT"<<endl;
		N--;
	}
	
}
