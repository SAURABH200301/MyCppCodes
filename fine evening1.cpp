/*#include<iostream>
using namespace std;
int value(int n)
{
	return pow(2,(log(n)/log2));
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,k;
		cin>>n>>k;
		int num=value(n);
		if(num>k)
		{
			cout<<num+1<<endl;
			break;
		}
		else if(num<n)
		{
			if(num<pow(2,(log(n+1)/log2)+1))
			{
				cout<<(log(n+1)/log2)+1<<endl;
			}
		}
		else 
		{
			int m=value(n-num);
		}
		t--;
	}
}*/
#include<iostream>
using namespace std;
int main()
{
    int d,TO,TC;
    cin>>d;
    int Oc,Of,Od;
    cin>>Oc>>Of>>Od;
    TO=Oc+(d-Of)*Od;
    int Cs,Cb,Cm,Cd;
    cin>>Cs>>Cb>>Cm>>Cd;
    TC=Cb+(d/Cs)*Cm+d*Cd;
    if(TO<TC||TC==TO)
     cout<<"Online Taxi"<<endl;
    else if(TC<TO)
     cout<<"Classic Taxi"<<endl;
     return 0;
}
