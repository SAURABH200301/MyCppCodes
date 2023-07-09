#include<iostream>                    
#include<conio.h>            
using namespace std; 

int main() 
{ 
    int i, j, k, sp, space = 4; 
    char prt = '$'; 
    for (i = 1; i <= 5; i++) 
     { 
            // For printing the space 
           for (sp = space; sp >= 1; sp--)  
        { 
            cout << " "; 
        }
		// For printing the $ 
		for (j = 1; j <= i; j++)  
        { 
         cout << prt; 
        } 
         for (k = 1; k <= (i - 1); k++)  
          { 
           if (i == 1)  
           { 
            continue; 
           } 
            cout << prt; 
           } 
           cout << "\n"; 
           space--; 
   } 
        space = 1; 
        for (i = 4; i >= 1; i--)  
      { 
        for (sp = space; sp >= 1; sp--)  
      { 
	  cout << " "; 
       } 
        for (j = 1; j <= i; j++)  
        { 
		cout << prt; 
        } 
        for (k = 1; k <= (i - 1); k++) 
        { 
         cout << prt; 
         } 
        space++; 
         cout << "\n"; 
         } 
         space = 3; 
        for (i = 2; i <= 5; i++) 
       { 
         if ((i % 2) != 0) 
         { 
         for (sp = space; sp >= 1; sp--) 
         { 
          cout << " "; 
          } 
          for (j = 1; j <= i; j++) 
          { 
           cout << prt; 
          } 
		  } 
          if ((i % 2) != 0) 
         { 
           cout << "\n"; 
		   space--; 
         } 
         } 
        return 0; 
}
