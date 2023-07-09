#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        vector<int> al,bob;
        for(int i=0;i<n;i++)
         
         {
         	int a;cin>>a;
         	al.push_back(a);
		 }
        for(int i=0;i<n;i++)
          {
          	int a;cin>>a;
          	bob.push_back(a);
		  }
        sort(al.begin(),al.end());
        sort(bob.begin(),bob.end());
        
        if(bob[n-1]>al[n-1])
         cout<<"Alice"<<endl;
        else if(bob[n-1]<al[n-1])
         cout<<"Bob"<<endl;
        else
          cout<<"Tie"<<endl;
          t--;
    }
    return 0;
}
