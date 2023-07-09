#include<iostream>                              //SEVEN SEGMENT DISPLAY
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long sum=0;
		long long int  n;
		cin>>n;
		if(n==0)
		 sum+=6;
		else
		{
		while(n>0)
		{   
			int r=n%10;
			 n=n/10;
			 if(r==0||r==6||r==9)
			   sum+=6;
			 else if(r==1)
			 sum+=2;
			 else if(r==2||r==3||r==5)
			  sum+=5;
			  else if(r==4)
			  sum+=4;
			  else if(r==7)
			  sum+=3;
			  else if(r==8)
			  sum+=7; 
		}
	}
		
		t--;
		if (sum%2!=0) { 
		 if((sum-3)%2==0)
        {
		cout << "7"; 
        for (long i = 0; i < (sum - 3) / 2; i++) 
            cout << "1"; 
			
        }cout<<endl;
		} 
  
    else { 
        
        for (long i = 0; i < sum / 2; i++) 
            cout << "1";
		}cout<<endl;
}
}
