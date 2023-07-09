#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void palindrome(string str)
{
    int count=0;
	string::iterator t;
	string::reverse_iterator i;
	for(t=str.begin(),i=str.rbegin();t!=str.end();t++,i++)
	    {
	    	if(*t!=*i)
	        count++;
	        else 
	        count--;
		}
	if(count>=0)
	{
		sort(str.begin(), str.end()); 
        cout << str; 
	}
	else 
	cout<<"-1";	
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		string s;
		cin>>s;
		palindrome(s);
		cout<<endl;
		t--;
	}

	    
	return 0;    
}
