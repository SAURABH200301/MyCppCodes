/*#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int x=0,y=0,X,Y;
		cin>>X>>Y;
		if(Y>X)
		 cout<<"-1"<<endl;
		else
		{
			if(X=Y)
			{
				int sum=0;
				while(x!=X&&y!=Y)
				{
					x+=1;y+=1;
					sum+=1;
				}
			}
			else
			{
				do
				{
					x+=1;
					if(x=y)
					{
						int sum=0;
				        while(x!=X&&y!=Y)
				        {
					     x+=1;y+=1;
					     sum+=1;
				        }
					}
				}
			}
		}
		t--;
	}
}*/
#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int x,y;
cin>>x>>y;
if(x==y)
{
cout<<x<<endl;
}
else if(x<y || x<0 || y<0)
{
cout<<"-1"<<endl;
}
else
{
cout<<x<<endl;
}
}
}
