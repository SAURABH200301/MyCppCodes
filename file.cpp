

#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
 
   using namespace std;
    int main()
      {  
        char myline[75];
        int ic=0;
        ofstream outfile("out.txt",ios::app);
        ifstream infile("Q1.txt",ios::in);
        if(!infile) 
           { 
             cerr<<"failed to open input file"<<endl;
              exit(1);
		   }
		 while (1) 
		    {
		    	infile.getline(myline,75,',');
				if(infile.eof())  break;
				ic++;
				outfile<<ic<<":"<<myline<<endl;
				
				}
		 infile.close();
		 outfile.close();
		 cout<<"output"<<ic<<"records"<<endl;
		 return 0;
		 getch();		    
	  }
