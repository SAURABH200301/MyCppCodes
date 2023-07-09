/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s1,s2;
	int t;
	cin>>t;
	while(t>0)
	{
		int count=0;
	    cin>>s1;
	    cin>>s2;
	    if(s1.length()>=s2.length())
		{
		for(int i=0;i<s1.length();i++)
	    {
	    	for(int j=0;j<s2.length();j++)
	    	{
	    		if(s1[i]==s2[j])
	    		count++;
			}
		}
	}
	else 
	{
		for(int i=0;i<s2.length();i++)
	    {
	    	for(int j=0;j<s1.length();j++)
	    	{
	    		if(s1[i]==s2[j])
	    		count++;
			}
		}
	}
		
		cout<<s1.length()+s2.length()-count*2;
		t--;
	}
	return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
	int n,prod=1;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	   cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		prod=prod*arr[i];
	}  
	cout<<prod;
	return 0;

}
