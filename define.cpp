#include<iostream>
using namespace std;
#define sq(x) x*x;   //defining fun 

int main()
{
	int x=36/sq(6);
	cout<<x;      // output is 36 because there is no bracks in sq() 
	return 0;     //so when it get divided one 6 get multiple and other get divided
}
