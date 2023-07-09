#include<iostream>
#include<string>
using namespace std;
string getkiller(int d)
{
	if(d==1)
	 return "mountain";
	else if(d==2)
	 return "tywin";
	 else if(d==3)
	 return "hound";
	 else
	  return "jaime";
}
int main()
{
	int t;int d=2;
	//1=M,2=T,3=H,4=J
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		int binary[n];
		for(int i=0;i<n;i++)
		{
			cin>>binary[i];
		}
		//int d=2;
		for(int i=0;i<n;i++)
		{
			if(binary[i]==0)
			{
				if(d==4)
				 {
				 	d=1;
				 }
				 else
				  {
				    d++;
				  }
			}
			else if(binary[i]==1)
			{
				if(d==1)
				  {
				  d==4;}
				else
				 {
				 d--;}
			}
		}
		cout<<getkiller(d)<<endl;
		t--;
	}
	return 0;
}
