#include<iostream>                //this function shows the how reference works and static 
using namespace std;
int &fun()                      //here &fun() means it is called via refrence means different name but same variable 
{
    static int x = 10;         
    return x;
}
int main()
{
    fun() = 30;    //here fun() calls
    cout << fun();
    return 0;
}                 
              //most imp thing here is that output is 30 where in function value is changing using refrence but 
              //keyword static is used thats why scope of x is inside fun() when it returns again value become 30
