#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
	complex(int r=0,int i=1)
	{
		real=r;
		img =i;
	}
	friend ostream &operator<<(ostream &o,complex &c)
	{
		o<<c.real<<"+i"<<c.img<<endl;
		return o;
	}
};
int main()
{
	complex c1(3,5);
	cout<<c1;
	return 0;
}
