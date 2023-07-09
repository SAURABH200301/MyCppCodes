#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class cricket
     {
     	  string fname[10],lname[10];
     	  int runmade[10],nofour[10],nosix[10],i;
     	  
     	  public:
     	  	void assign()
     	  	{    cout<<"enter the no. of cricket players"<<endl;
     	  	     cin>>i;
     	  	     for(int j=0;j<i;j++)
     	  		{
				   cout<<"enter the first name of the cricket player"<<" "<<j+1<<endl;
				     cin>>fname[j];
				   cout<<"enter the last name of cricket player"<<" "<<j+1<<endl;
				    cin>>lname[j];
				   cout<<"enter the run mades by the player"<<endl;
				   cout<<"enter the no. of four made"<<endl;
				   cout<<"enter the no. of sixes made"<<endl;
     	  		 
     	  		  
     	  		
				   cin>>runmade[j]>>nofour[j]>>nosix[j];
     	  		
     	  		
     	     	}
			}
			void update()
			{   int a;
				cout<<"enter the no. of cricket player you want to update"<<endl;
				cin>>a;
				cout<<"name of the player is "<<fname[a+1]<<" "<<lname[a+1]<<endl;
				cout<<"enter the run"<<endl;
				cin>>runmade[a+1];cout<<endl;
				cout<<"enter the fours made"<<endl;
				cin>>nofour[a+1];cout<<endl;
				cout<<"enter the sixes made"<<endl;
				cin>>nosix[a+1];cout<<endl;
				
			   } 
			 void info()
			 {for(int j=0;j<i;j++)
			   {
			   	  cout<<"name of player no.  "<<j+1<<" is "<<fname[j]<<" "<<lname[j]<<endl;
			   	  cout<<"score card is"<<endl;
			   	  cout<<"run made "<<runmade[j]<<endl;
			   	  cout<<"fours made "<<nofour[j]<<endl;
			   	  cout<<"sixes made "<<nosix[j]<<endl;
			   }
			   }
	 };
	 
	 int main()
	 {  
	    cricket c;int b;
	    cout<<"WELCOME TO IPL PLAYERS INFO"<<endl;
	    cout<<"Assign the intial values"<<endl;
	    c.assign();
	    cout<<"ENTER 1 FOR UPDATE"<<endl;
	    cout<<"ENTER 2 FOR PLAYER INFO"<<endl;
	    cin>>b;
	    
	    switch(b)
	    {
	    	case 1 :  c.update();
	    	break;
	    	case 2: c.info();
	    	break;
	    	default : 
	    	cout<<"no. doesnt match"<<endl;
		}
		getch();
	 }
