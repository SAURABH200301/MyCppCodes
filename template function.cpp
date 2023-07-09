#include<iostream>

template<typename t>
const t max(t x,t y)
{
    return (x > y) ? x : y;
}
int main()
{ 
  
  
  std::cout<<max<int>(2,4)<<" "<<max<float>(2.3,6.9)<<" "<<max<char>('a','h');
return 0;
	 
}
