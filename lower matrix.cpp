#include<iostream>
using namespace std;
class symmteric_matrix
{
   private:
   int *A;
   int n;
   public:
   	symmteric_matrix()
   	{
   		n=2;
   		A=new int[2*(2+1)/2];
	}
	symmteric_matrix(int n)
	{
		this->n=n;
		A=new int[n*(n+1)/2];
	}
	~symmteric_matrix()
	{
		delete []A;
	}
	void set(int i,int j,int x);
	int get(int i,int j);
	void display();
	int getdimension();
};
void symmteric_matrix::set(int i,int j,int x)
{
	if(i>=j)
	{
		A[i*(i-1)/2 +(j-1)]=x;
	}
	else
	{
		A[i*(i-1)/2 +(j-1)]=0;
	}
}
int symmteric_matrix::get(int i,int j)
{
    if(i>=j)
    {
    	return A[i*(i-1)/2 +(j-1)];
	}
	else
	    return 0;
}
void symmteric_matrix::display()
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
int symmteric_matrix::getdimension(){
	return n;
}

int main()
{
	int d;
	cout<<"ENTER DIMENSION OF THE MATRIX"<<endl;
	cin>>d;
	symmteric_matrix m(d);
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
