#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
   int t;
   cin>>t;
   
   while(t--){
       
       int m,n,x,y;
       
       cin>>m>>n>>x>>y;
       
       
       char a[m + 7][n + 7];
       
       for(int i=0;i<m;i++){
           for(int j=0;j<n;j++) cin>>a[i][j];
       }
       x--;
       y--;
       if(a[x][y] == 'B') {
                cout<<"0"<<endl;
               goto nxt;
       }
       
       for(int i=0;i<m;i++){
           if(a[i][y] == 'B') {
               cout<<"1"<<endl;
goto nxt;           }
       }
       
       for(int i=0;i<n;i++){
           if(a[x][i] == 'B') {
               cout<<"1"<<endl;
               goto nxt;
           }
       }
       
       
       
       
       
       for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
               if(a[i][j] == 'B') {
                   cout<<"2"<<endl;
                   
                   goto nxt;
               }
           }
       }
       
       cout<<"-1"<<endl;
       nxt:
       cout<<"";
   }
}
