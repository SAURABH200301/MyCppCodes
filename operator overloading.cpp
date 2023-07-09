#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
	complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
	int getre()
	{
		return real;
	
	}
	int getimg()
	{
	return img;
    }   
	void setre(int r)
	{
		real=r;
	}
	void setimg(int i)
	{
		img=i;
	}
	/*complex operator+(complex x)       //addition operator overloading 
	{                                   
		complex temp;
		temp.real=real+x.real;
		temp.img=img+x.img;
		return temp;
	}*/
		complex operator-(complex x)       //subtraction operator overloading 
	{                                   
		complex temp;
		temp.real=real-x.real;
		temp.img=img-x.img;
		return temp;
	}
	friend complex operator+(complex c1,complex c2);    //friend operator overloading takes 2+parameter and defination outside the class
};
complex operator+(complex c1,complex c2)
{
	complex t;
	t.real=c1.real+c2.real;
	t.img=c1.img+c2.img;
	return t;
}
int main()
{
	complex c(1,2),c1(2,3),c2,c3,c4;
	cout<<"c complex no. is"<<endl;
	cout<<c.getre()<<"+i"<<c.getimg()<<endl;
	cout<<"c1 complex no. is"<<endl;
	cout<<c1.getre()<<"+i"<<c1.getimg()<<endl;
	c2=c+c1;
	cout<<"c2 complex no. is(c+c1)"<<endl;
	cout<<c2.getre()<<"+i"<<c2.getimg()<<endl;
	c3=c1-c;
	cout<<"c3 complex no. is(c1-c)"<<endl;
	cout<<c3.getre()<<"+i"<<c3.getimg();
	c4=c1+c2;
	cout<<"c4 complex no. is(c1+c2)"<<endl;
	cout<<c4.getre()<<"+i"<<c4.getimg();
	return 0;
}
