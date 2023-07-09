/*#include<iostream>
using namespace std;
int main()
{
	long long int s,min=10000000;
	int index;
	cin>>s;
	long int arr[s];
	for(int i=0;i<s;i++)
	  cin>>arr[i];
	  for(int i=0;i<s;i++)
	 {
	  if((arr[i]%7==0)&&(min>arr[i]))
	  {
	  	min=arr[i];
	  	index=i;
		  	  }
    }
    cout<<index;
    return 0;
	     
}*/
#include<iostream>
using namespace std;
int main()
{
    char s[9];
    cin>>s;
    if(((int)s[2]!=65)||((int)s[2]!=69)||((int)s[2]!=73)||((int)s[2]!=79)||((int)s[2]!=85)||((int)s[2]!=89))
    {
       if(((s[0]+s[1])%2==0)&&((s[3]+s[4])%2==0)&&((s[4]+s[5])%2==0)&&((s[7]+s[8])%2==0))
       cout<<"valid"<<endl;
       else cout<<"invalid"<<endl;
    }
    else cout<<"invalid"<<endl;
    return 0;
}
