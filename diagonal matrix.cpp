#include<iostream>
using namespace std;
class diagonal_matrix
{
    private:
	  int *A;
	  int n;
	public:
	diagonal_matrix()
	{
		n=2;
		A=new int[2];
	}	
	diagonal_matrix(int n)
	{
		this->n=n;
		A=new int[n];
	}
	~diagonal_matrix()
	{
		delete []A;
	}
	void set(int i,int j,int x);
	int get(int i,int j);
	void display();
	int getdimension();
};
void diagonal_matrix ::set(int i,int j,int x)
{
	if(i==j)
	{
		A[i-1]=x;
	}
}
int diagonal_matrix::get(int i,int j)
{
	if(i==j)
	{
		return A[i-1];
	}
	else
	   return 0;
}
void diagonal_matrix::display()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==j)
			{
				cout<<A[i-1]<<" ";
			}
			else
			  cout<<0<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int d;
	cout<<"ENTER DIMENSION OF THE MATRIX"<<endl;
	cin>>d;
	diagonal_matrix m(d);
	int x;
	cout<<"ENTER ALL THE ELEMENTS"<<endl;
	for(int i=1;i<=d;i++)
	{
		for(int j=1;j<=d;j++)
		{
			cin>>x;
			m.set(i,j,x);
		}
	}
	m.display();
	return 0;
}
