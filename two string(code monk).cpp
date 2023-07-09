#include <bits/stdc++.h> 
using namespace std; 
  
/* function to check whether two strings are  
   Permutation of each other */
bool arePermutation(string str1, string str2) 
{ 
    // Get lenghts of both strings 
    int n1 = str1.length(); 
    int n2 = str2.length(); 
  
    // If length of both strings is not same, 
    // then they cannot be Permutation 
    if (n1 != n2) 
      return false; 
  
    // Sort both strings 
    sort(str1.begin(), str1.end()); 
    sort(str2.begin(), str2.end()); 
  
    // Compare sorted strings 
    for (int i = 0; i < n1;  i++) 
       if (str1[i] != str2[i]) 
         return false; 
  
    return true; 
} 
  
/* Driver program to test to print printDups*/
int main() 
{ 
int t;
    cin>>t;
    while(t>0)
    {
	
    string str1; 
    string str2;
	cin>>str1;cin>>str2; 
    if (arePermutation(str1, str2)) 
      printf("Yes"); 
      cout<<endl;
    else
      printf("No"); 
      cout<<endl;
      t--;
  }
  
    return 0; 
} 

