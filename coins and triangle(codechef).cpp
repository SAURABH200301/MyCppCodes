#include <iostream>
using namespace std;
int main() {
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    int count=1,p=0;
   while(p+count<=n){
     p+=count;
     count++;

   }
   cout<<count-1<<endl;
  }
  return 0;	
} 

