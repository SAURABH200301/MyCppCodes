#include<iostream>
#include<math.h>
using namespace std;               //this program is to implement ((x AND y) XOR(x OR y))                         
                                     //which after solving become     x XOR y
 int fun(int n)      //converting decimal to binary
 {
 	cout<<"n"<<n<<endl;
 	int b[4]={0,0,0,0};
 	for(int i=4;i>0;i--)
 	{
 		b[i] =n%2;
 		n=n/2;
 		}
 		for(int i=0;i<4;i++)
 	{
 		cout<<b[i]<<" "; }
 		
 	  
    return *b;	
 }                                    
int main()
{
	int t;
	cout<<"t";
	cin>>t;
	while(t>0)
	{
		int n,j=0;
		cout<<"n";
		cin>>n;
		int a[n],b[n];
		cout<<"enter"<<endl;
		for(int i=0;i<n;i++)
		   cin>>a[i];
		   
		         
		for(int i=0;i<n;i++)
		{
			int A[4],B[4],C[4]={0,0,0,0};
			
			A[4]=fun(a[i]);
			B[4]=fun(a[i+1]);
			cout<<endl<<"d";
			for(int i=0;i<4;i++)
			   cout<<B[i]<<" ";
			  for(int i=0;i<4;i++)
		      {
		      	if(A[i]==B[i])
		      	{
		      		C[i]='0'; 
				  }
				  else 
				  {
				  	C[i]='1';
				  }
			  }
			  
			  
			for(int u=0;u<4;u++)              //coverts binary to decimal
			{
				b[j]=b[j]+C[u]*pow(2,u);
				
			  }  
			  j++;
			  
		} 
		
		int small=b[0];
			  for(int i=1;i<n;i++)
			  {
			  	if(small>b[i])
			  	small=b[i];
			  }  
			  cout<<"small"<<small<<endl;
		t--;
		for(int i=0;i<n;i++)
		   cout<<a[i]<<" ";
	}
	
	return 0;
}	

