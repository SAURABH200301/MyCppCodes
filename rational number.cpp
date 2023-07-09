#include<iostream>
using namespace std;
class rational
{
	int p,q;
	public:
		rational(int,int);
		void set_number(int,int);
		int get_number();
		int add();
		int subs();
		
};
rational::rational(int p=0,int q=1)
{
	this->p=p;
	this->q=q;
}
void rational::set_number(int P,int Q)
{
	if(Q!=0)
	{  if(P>0||Q>0)
	    {
		p=P;
		q=Q;
	    }
	    else
	    p=-P;
	    q=Q;
	}
	else 
	cout<<"number is tending to infinte"<<endl;
}
rational::get_number()
{
	rational temp;
	temp.p=p;
	temp.q=q;
	return temp;
}
int rational::add(rational a,rational b)
{
	rational temp;
	temp.p=a.p*b.q+a.q*b.p;
	temp.q=a.q*b.q;
	return temp;
}
int rational::subs()
{
		rational temp;
	temp.p=a.p*b.q-a.q*b.p;
	temp.q=a.q*b.q;
	return temp;
}
int main()
{
	int p,q;
	rational r1,r2;
	cout<<"enter p/q for first rational number (p then q)"<<endl;
	cin>>p>>q;
	r1.set_number(p,q);
	cout<<"enter p/q for second rational number (p then q)"<<endl;
	cin>>p>>q;
	r2.set_number(p,q);
	cout<<"your entered first number is "<<endl;
	rational r=r1.get_number();
	cout<<"p "<<r.p<<"and q "<<r.q<<endl;
	
	cout<<"your entered second number is "<<endl;
	rational r3=r1.get_number();
	cout<<"p "<<r3.p<<"and q "<<r3.q<<endl;
	rational r4;
	r4.add(r1,r2);
	cout<<"addtion of r1 and r2 is "<<endl;
	cout<<r4.p<<"/"<<r4.q<<endl;
	return 0;
	
}

