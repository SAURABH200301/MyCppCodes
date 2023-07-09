#include<iostream>  //inheritance 
using namespace std;
class shape
{
	float area;
	public:
		shape()
		{
			area=0;
		}
	float getarea()
	{
		return area;
	}
	void setarea(int a)
	{
		area=a;
	}
};
class quadrilateral
{
	public:
		quadrilateral()
		{
			cout<<"QUADRILATERALS HAVE 4 SIDES"<<endl;
		}
};
class rectangle :public shape,public quadrilateral
{ 
    public:
    	int l,b;
    	rectangle(int l=0,int b=0)
    	{
    		this->l=l;
    		this->b=b;
		}
		int areaa(int l,int b)
	 {
	 	return l*b;
	 }
	
};

int main()
{
	rectangle r;
	cout<<"ENTER THE LENGTH AND WISDTH OF RECTANGLE"<<endl;
	cin>>r.l>>r.b;
	
	cout<<"AREA OF THE RECTANGLE IS "<<r.areaa(r.l,r.b);
	return 0;
}
