#include<iostream>
#include<conio.h>
using namespace std;
class Flight
  {
  	 int fno;   //flight number
  	 float dist,fuel;       //distance and fuel
  	 char des;      //destination
  	 int calfuel(int a)
  	    { 
  	      if(dist<=1000)
  	         return 500;
  	      else if(dist<=2000)
			return 1100;
		  else if(dist>2000)
		    return 2200;   
		  }
	public :
		void feed_info()
		  { 
		     cout<<"enter flight no."<<endl;
		     cin>>fno;
		     cout<<"enter your destination"<<endl;
		     cin>>des;
		     cout<<"enter the distance between your distination and plane "<<endl;
		     cin>>dist;
		     fuel=calfuel(dist);
		     
		  }
		 void show_fuel()
		  {   
		      cout<<"flight no. is"<<"  "<<fno<<endl;
		      cout<<"your destination is "<<"  "<<des<<endl;
		      cout<<"total distance"<<"  "<<dist<<endl;
		      cout<<"fuel required to reach your destination is acc to your distance is "<<"  "<<fuel;
		   } 
	    
  };
  int main()
  { Flight f;
  f.feed_info();
  f.show_fuel();
  	  
		getch();
  }
