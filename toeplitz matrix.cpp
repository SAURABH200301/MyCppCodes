#include<iostream>
using namespace std;
class toeplitz
{
	private:
		int *A;
		int n;
	public:
		toeplitz()
		{
			int n;
			A=new int[2*n-1];
		}
		toeplitz(int n)
		{
			A=new int[2*n-1];
		}
	    void set(int i,int j,int x)
	    {
	    	if(i-j<=0)
	    	  A[j-i]=x;
	    	else
	    	  A[n+(i-j)-1]=x;
		}
		int get(int i,int j)
		{
			if(i-j<=0)
	    	  return A[j-i];
	    	else
	    	  return A[n+(i-j)-1];
		}
		void display()
		{
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					cout<<get(i,j)<<" ";
				}
				cout<<endl;
			}
		}
};
int main()
{
	int d,x;
	cout<<"ENTER THE DIMENTION OF THE MATRIX"<<endl;
	cin>>d;
	toeplitz t(d);
	cout<<"ENTER ALL THE ELEMENTS"<<endl;
	for(int i=1;i<=d;i++)
     {
     	for(int j=1;j<=d;j++)
     	{
     		cin>>x;
     		t.set(i,j,x);
		 }
	 }
	 cout<<endl;
	 t.display();cout<<endl;
	 
	 return 0;
}
