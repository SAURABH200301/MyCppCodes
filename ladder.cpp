/*#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			for(int h=0;h<i;h++)
			 cout<<"*";
			for(int j=0;j<2*(n-i);j++)
			{
				cout<<"#";
			}
			for(int h=0;h<i;h++)
			 cout<<"*";
			 cout<<endl;
		}
		t--;
	}
    return 0;
}*/
// CPP program to print Collatz sequence 
#include <bits/stdc++.h> 
using namespace std; 

void printCollatz(int n) 
{ 
	// We simply follow steps 
	// while we do not reach 1 
	while (n != 1) 
	{ 
		//cout << n << " "; 

		// If n is odd 
		if (n & 1) 
			n = 3*n + 1; 

		// If even 
		else
			n = n/2; 
	} 

	// Print 1 at the end 
	if(n==1) 
	cout<<"YES"<<endl;
	else 
	cout<<"NO"<<endl;
	} 

// Driver code 
int main() 
{ 
    int t;
    cin>>t;
    while(t>0)
	{
		int n;
		cin>>n;
		printCollatz(n); 
		t--;
	}
	return 0; 
} 

