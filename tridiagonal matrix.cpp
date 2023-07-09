#include<iostream>
using namespace std;
class tridiagonal  
{
     private:
	 int *A;
	 int n;
	 public:
	 tridiagonal()
	 {
	 	n=2;
	 	A=new int[3*2-2];
	 }	
	 tridiagonal(int n)
	 {
	 	this->n=n;
	 	A=new int[3*n-2];
	 }
	 ~tridiagonal()
	 {
	 	delete []A;
	 }
	 void set(int i,int j,int x);
	int get(int i,int j);
	void display();
	void  printarray()
	{
		for(int i=1;i<=(3*n-2);i++)
		{
			cout<<A[i]<<" ";
		}
	}
};
void tridiagonal::set(int i,int j,int x)
{
	if(i-j==1)  //condition for the lower diagonal
	{
		A[i-1]=x;  //starting with the lower diagonal in the array
	}
	else if(i-j==0) //condition for the middle diagonal
	{
		A[n-1+i-1]=x;//after lower diagonal is filled middle is filled in the array
	}
	else if(i-j==-1)  //condition for the upper diagonal
	{
		A[2*n+i-2]=x; //at the end upper is filled
	}
}
int tridiagonal::get(int i,int j)
{
	if(i-j==1)
	{
		return A[i-1];
	}
	else if(i-j==0)
	{
		return A[n-1+i-1];
	}
	else if(i-j==-1)
	{
		return A[2*n+i-2];
	}
	else
	 return 0;
}
void tridiagonal::display()
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
int main()
{
	int d,x;
	cout<<"ENTER THE DIMENTION OF THE MATRIX"<<endl;
	cin>>d;
	tridiagonal t(d);
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
	 t.printarray();
	 return 0;
}
