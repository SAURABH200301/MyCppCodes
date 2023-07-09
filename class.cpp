#include<iostream>
#include<conio.h>
using namespace std;

  class BOX
       {int i;
       	                          //private member
       	 float side[2] , area[2];
       	 int execarea(int a)
       	      {
       	      	return a*a;
				 }
		public :                           //public member
		
		void getbox()
		{
			
			cout<<"enter the no. of box for which u have to find the area"; 
		    cin>>i;
		    for(int j=0;j<i;j++)
			{
			cout<<"enter the side of box no"<<" "<<j+1<<endl;
			cin>>side[j];
			
			area[j]=execarea(side[j]);
		}
		}
		void showbox()
		{
			for(int j=0;j<i;j++)
			 {
			 cout<<"box number is"<<"    "<<j+1<<endl;
			 cout<<"side of the box is"<<"    "<<side[j]<<endl;
			 cout<<"area of box "<<"    "<<area[j]<<endl;
		}
		}
	   };
	   
	   int main()                          //main() fuction
	    {
	    
	    	 BOX b;
	    	 b.getbox();
	    	 b.showbox();
	    	 getch();
	    	 
	    	
		}
