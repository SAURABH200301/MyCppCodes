#include<iostream>
using namespace std;
int  fun(int i,int j,char n,char a[3][3],int xx,int oo)
{
	int u=0;
	if(n=='.')
	 return 0;
	else 
	{
		if(i==0&&j==0)
		{
			if(a[1][1]==n&&a[2][2]==n||a[0][1]==n&&a[0][2]==n||a[1][0]==n&&a[2][0]==n)
			 {
			 cout<<n<<" "<<"won "<<endl;
			 u++;
		     }
		}
		else if(i==1&&j==1)
		{
			if(a[0][1]==n&&a[2][1]==n||a[1][0]==n&&a[1][2]==n||a[0][2]==n&&a[2][0]==n)
			{
			cout<<n<<" "<<"won "<<endl;
			u++ ;
		    }
		}
		else if(i==2&&j==2)
		{
			if(a[2][0]==n&&a[2][1]==n||a[0][2]==n&&a[1][2]==n)
			{
			cout<<n<<" won "<<endl;
			u++;
		    }
		}
		else if(oo+xx!=9)
	  {
	  	if(xx>oo)
	  	 cout<<"O turn"<<endl;
	  	else 
	  	  cout<<"Y turn"<<endl;
	  } 
		
	}
	return 0;
}
int main()
{
	char arr[3][3];int xx=0,oo=0,s=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		 {
		 cin>>arr[i][j];
		 if(arr[i][j]=='X')
		   xx++;
		else if(arr[i][j]=='O')
		   oo++;
		else 
		   s++;
	     }
	}
	if(xx-oo>1||oo-xx>1)
	 cout<<"Wait What?"<<endl;
  else
	{
		int a;
	for(int i=0;i<3;i++)
	{
	     a+=fun(i,i,arr[i][i],arr,xx,oo);	
	}
	if(a>1)
	{
		cout<<"Wait What?"<<endl;
	}
	else if(a==1)
	{
		cout<<" won"<<endl;
	}
    }
    
	return 0;
}
