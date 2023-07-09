#include<bits/stdc++.h>
using namespace std;
int main(){
	int k=2,store=1;
   for(int i=0;i<3;i++){
   	     k--;
   	  for(int j=0;j<3;j++){
   	  	   if(j==2)
   	  	    {
				store=k;

			}
   	  	     
   	  	   if(j==0)
   	  	     {
   	  	       cout<<store<<" ";
			 }
		    else
   	  	      cout<<k<<" ";
   	  	      
   	  	    k++;
		 }
		 cout<<endl;
   }
	return 0;
}
