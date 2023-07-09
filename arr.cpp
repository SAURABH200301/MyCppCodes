#include<iostream>
using namespace std ;

void swap(int arr[] , int size)
{
int a=0 ;
int count=0 ;
for(int i=0 ; i<size ; i++ )
{
	if(arr[i]!=1)
	{
		int tmp = arr[i] ;
		arr[i] = arr[a] ;
		arr[a] = tmp ;
		a++ ;
		count++ ;
	}
}
cout<< count << endl ;

}

int main()
{
	int arr[]={0,1,0,1,0} ;
		
		
		swap(arr , 5) ;
}
